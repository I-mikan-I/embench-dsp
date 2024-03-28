    clear all;
    close all;
    restoredefaultpath;
    ntaps = 256;

    addpath(sprintf("fir%i", ntaps));

    Fs_hz = 48000;
    n_samples = 1600;
    plot_input_output = true;
    gen_files = false;
    
    % Input Stimulus
    tone_freq_hz = [100 4000 8000];
    tone_amp_dB = [-30 -20 -10];

    tone_num_samples = n_samples - 1;
    dt = 1/Fs_hz;
    t = (0:dt:tone_num_samples*dt)';
    num_tones = size(tone_freq_hz);
    tone = (10 ^ (tone_amp_dB(1) / 20)) * sin(2 * pi * tone_freq_hz(1) * t);
    if(num_tones(2) > 1)
        for i=2:num_tones(2) 
            tone = tone + (10 ^ (tone_amp_dB(i) / 20)) * sin(2 * pi * tone_freq_hz(i) * t);
        end
    end

    input = double(tone);
   
    % Run the input through the filter to get reference output
    output = fir(input);

    % Load the filter coefficients and reshape
    load("coeff.mat");
    coeff_out = reshape(coeff, [size(coeff,2), 1]);
   
    % Optionally plot the input and output
    if (plot_input_output)
        figure(1)
        plot(input);
        title('Unfiltered Input')
    end

    if (plot_input_output)
        figure(2);
        plot(output);
        title(sprintf('Filter TAPS=%i Output', ntaps))
    end

    % Generate all the C files
    if (gen_files)
        outdir = sprintf("fir%i/generated", ntaps);
    
        mkdir(outdir);
        generate_f32_array_cfile(sprintf("%s/unfiltered_input.c", outdir), "testInput", input, 10)
        generate_f32_array_cfile(sprintf("%s/filtered_output_%i.c", outdir, ntaps), "refOutput", output, 10)
        generate_f32_array_cfile(sprintf("%s/coeff_%i.c", outdir, ntaps), "coeff", coeff_out, 10);
    end
  