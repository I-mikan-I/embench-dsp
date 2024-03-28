function y = fir(x)
%FIR Filters input x and returns output y.

% MATLAB Code
% Generated by MATLAB(R) 23.2 and DSP System Toolbox 23.2.
% Generated on: 15-Jan-2024 16:22:33

%#codegen

% To generate C/C++ code from this function use the codegen command. Type
% 'help codegen' for more information.

persistent Hd;

if isempty(Hd)
    
    % The following code was used to design the filter coefficients:
    % % FIR Window Lowpass filter designed using the FIR1 function.
    %
    % % All frequency values are in Hz.
    % Fs = 48000;  % Sampling Frequency
    %
    % N    = 255;      % Order
    % Fc   = 1000;     % Cutoff Frequency
    % flag = 'scale';  % Sampling Flag
    %
    % % Create the window vector for the design algorithm.
    % win = hamming(N+1);
    %
    % % Calculate the coefficients using the FIR1 function.
    % b  = fir1(N, Fc/(Fs/2), 'low', win, flag);
    
    Hd = dsp.FIRFilter( ...
        'Numerator', [-0.000165860493946476 -0.000151425461441179 ...
        -0.000134554233216041 -0.000115277033090554 -9.3626483064379e-05 ...
        -6.96460474347619e-05 -4.33996660727244e-05 -1.49821764319867e-05 ...
        1.54699268836617e-05 4.77678835528472e-05 8.16607210142501e-05 ...
        0.000116826487479295 0.000152865171653168 0.000189293788996469 ...
        0.000225544070204927 0.000260963127305411 0.000294817397525005 ...
        0.000326300076501944 0.000354542152510748 0.000378627044586566 ...
        0.000397608732499144 0.00041053314845154 0.000416462482360466 ...
        0.000414501937925321 0.000403828368753133 0.000383720125863199 ...
        0.000353587363092689 0.00031300197818008 0.000261726317225547 ...
        0.000199739741039314 0.000127262145359639 4.47735443073234e-05 ...
        -4.69711315626301e-05 -0.000146932804552871 -0.000253785277519198 ...
        -0.000365919097118371 -0.000481452694585235 -0.000598251091952646 ...
        -0.000713952291600648 -0.00082600128446691 -0.000931691421046451 ...
        -0.00102821269369721 -0.00111270628326558 -0.00118232453234548 ...
        -0.00123429532635134 -0.00126598969674459 -0.00127499131278259 ...
        -0.00125916640337083 -0.00121673255293814 -0.00114632474818853 ...
        -0.00104705701901212 -0.000918578019005211 -0.000761118930474251 ...
        -0.000575532156211345 -0.000363319375636379 -0.000126647695155893 ...
        0.00013164719001133 0.000408071685394598 0.000698499452134217 ...
        0.000998211367308209 0.00130195033621912 0.00160399069507705 ...
        0.00189822162607603 0.0021782436884455 0.00243747725532864 ...
        0.00266928134407902 0.00286708104354124 0.0030245014826905 ...
        0.00313550605694004 0.00319453643732061 0.00319665173884241 ...
        0.00313766412219802 0.00301426805125913 0.00282416043033151 ...
        0.00256614890162337 0.00224024569553667 0.00184774459377977 ...
        0.00139127878635493 0.000874857675500038 0.000303880998858371 ...
        -0.000314870994338353 -0.00097327218229059 -0.00166191046529829 ...
        -0.00237017290644477 -0.00308635564440035 -0.00379779763457715 ...
        -0.00449103680829352 -0.00515198678538565 -0.00576613184285264 ...
        -0.00631873743944637 -0.00679507323203204 -0.00718064520189436 ...
        -0.00746143324505998 -0.00762413037637144 -0.00765637955767875 ...
        -0.00754700409015903 -0.00728622751223516 -0.00686587901931959 ...
        -0.00627958056976511 -0.00552291206166983 -0.00459355125487312 ...
        -0.0034913854675475 -0.00221859249188621 -0.000779688641941264 ...
        0.000818457638995853 0.00256664763260789 0.00445341010336356 ...
        0.00646509480525246 0.0085860009791234 0.0107985394825376 ...
        0.0130834266090563 0.0154199070944172 0.017786003283515 ...
        0.0201587869543217 0.0225146698719501 0.0248297087861429 ...
        0.0270799202956159 0.0292416007887381 0.0312916465364638 ...
        0.0332078689632753 0.0349693001566634 0.0365564837953274 ...
        0.037951746879222 0.0391394479276811 0.0401061976704864 ...
        0.0408410486849058 0.0413356509220763 0.041584370610182 ...
        0.041584370610182 0.0413356509220763 0.0408410486849058 ...
        0.0401061976704864 0.0391394479276811 0.037951746879222 ...
        0.0365564837953274 0.0349693001566634 0.0332078689632753 ...
        0.0312916465364638 0.0292416007887381 0.0270799202956159 ...
        0.0248297087861429 0.0225146698719501 0.0201587869543217 ...
        0.017786003283515 0.0154199070944172 0.0130834266090563 ...
        0.0107985394825376 0.0085860009791234 0.00646509480525246 ...
        0.00445341010336356 0.00256664763260789 0.000818457638995853 ...
        -0.000779688641941264 -0.00221859249188621 -0.0034913854675475 ...
        -0.00459355125487312 -0.00552291206166983 -0.00627958056976511 ...
        -0.00686587901931959 -0.00728622751223516 -0.00754700409015903 ...
        -0.00765637955767875 -0.00762413037637144 -0.00746143324505998 ...
        -0.00718064520189436 -0.00679507323203204 -0.00631873743944637 ...
        -0.00576613184285264 -0.00515198678538565 -0.00449103680829352 ...
        -0.00379779763457715 -0.00308635564440035 -0.00237017290644477 ...
        -0.00166191046529829 -0.00097327218229059 -0.000314870994338353 ...
        0.000303880998858371 0.000874857675500038 0.00139127878635493 ...
        0.00184774459377977 0.00224024569553667 0.00256614890162337 ...
        0.00282416043033151 0.00301426805125913 0.00313766412219802 ...
        0.00319665173884241 0.00319453643732061 0.00313550605694004 ...
        0.0030245014826905 0.00286708104354124 0.00266928134407902 ...
        0.00243747725532864 0.0021782436884455 0.00189822162607603 ...
        0.00160399069507705 0.00130195033621912 0.000998211367308209 ...
        0.000698499452134217 0.000408071685394598 0.00013164719001133 ...
        -0.000126647695155893 -0.000363319375636379 -0.000575532156211345 ...
        -0.000761118930474251 -0.000918578019005211 -0.00104705701901212 ...
        -0.00114632474818853 -0.00121673255293814 -0.00125916640337083 ...
        -0.00127499131278259 -0.00126598969674459 -0.00123429532635134 ...
        -0.00118232453234548 -0.00111270628326558 -0.00102821269369721 ...
        -0.000931691421046451 -0.00082600128446691 -0.000713952291600648 ...
        -0.000598251091952646 -0.000481452694585235 -0.000365919097118371 ...
        -0.000253785277519198 -0.000146932804552871 -4.69711315626301e-05 ...
        4.47735443073234e-05 0.000127262145359639 0.000199739741039314 ...
        0.000261726317225547 0.00031300197818008 0.000353587363092689 ...
        0.000383720125863199 0.000403828368753133 0.000414501937925321 ...
        0.000416462482360466 0.00041053314845154 0.000397608732499144 ...
        0.000378627044586566 0.000354542152510748 0.000326300076501944 ...
        0.000294817397525005 0.000260963127305411 0.000225544070204927 ...
        0.000189293788996469 0.000152865171653168 0.000116826487479295 ...
        8.16607210142501e-05 4.77678835528472e-05 1.54699268836617e-05 ...
        -1.49821764319867e-05 -4.33996660727244e-05 -6.96460474347619e-05 ...
        -9.3626483064379e-05 -0.000115277033090554 -0.000134554233216041 ...
        -0.000151425461441179 -0.000165860493946476]);
end

y = step(Hd,double(x));


% [EOF]