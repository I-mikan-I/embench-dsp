#!/usr/bin/env python3

import matplotlib.pyplot as plt
import numpy as np
import os

from scipy import signal


test_name = 'dsp_fir_block_f32'
block_size = 128

fpath = os.path.join('tests', test_name, 'data')
enable_plots = False
enable_write_to_files = True


def write_to_file(fname, arr_name, arr, per_line):
    """ Write array to C file """
    outdir, f = os.path.split(fname)
    if not os.path.exists(outdir):
        os.makedirs(outdir)
    float_fmt = '{:13.10f}'  # 13 digits total, 10 decimal points floating-point
    arr_size = len(arr)
    with open(fname, 'w') as f:
        f.write("\n#include \"test_main.h\"")
        f.write("\n#include \"embench_math_types.h\"")
        f.write("\n\nfloat32_t {:}[{:}] = \n{{\n  ".format(arr_name, arr_size))
        for i in range(arr_size):
            if i == (arr_size - 1):
                f.write("{:}f\n".format(float_fmt.format(arr[i])))
            else:
                f.write("{:}f, ".format(float_fmt.format(arr[i])))
                if ((i+1) % per_line) == 0:
                    f.write("\n  ")
        f.write("};\n")


""" Filter Design """
Fs = 48000  # sampling frequency
N = 256  # order
Fc = 1000  # cutoff frequency
scale = True  # sampling flag
win = "hamming"

coeff = signal.firwin(N, Fc, window=win, scale=scale, fs=Fs)
# print(len(coeff), type(coeff))
# print(coeff)


""" Input Stimulus """
n_samples = N + block_size
tone_freq_hz = [100, 4000, 8000]
tone_amp_dB = [-30, -20, -10]
n_tones = len(tone_freq_hz)

n = np.arange(n_samples)
t = n / Fs  # discrete time array
x_100hz = (np.power(10,(tone_amp_dB[0]/20))) * np.sin(2 * np.pi * tone_freq_hz[0] * t)
x = (np.power(10,(tone_amp_dB[0]/20))) * np.sin(2 * np.pi * tone_freq_hz[0] * t)
if n_tones > 1:
    for i in range(1, n_tones):
        x += (np.power(10,(tone_amp_dB[i]/20))) * np.sin(2 * np.pi * tone_freq_hz[i] * t)

# print(len(x), type(x))


""" Filtered Output """
filtered_x = signal.lfilter(coeff, 1.0, x)
# print(len(filtered_x), type(filtered_x))


""" Plot """
if enable_plots:
    # The phase delay of the filtered signal. The first N-1
    # samples are "corrupted" by the initial conditions
    delay = 0.5 * (N-1) / Fs

    plt.figure(1)
    plt.plot(n, x)  # original signal
    plt.plot(n, filtered_x, 'r')  # filtered
    plt.xlabel('sample')
    plt.legend(['x', 'filtered x'])

    plt.figure(2)
    plt.plot(t, x)  # original signal
    plt.plot(t[N-1:]-delay, filtered_x[N-1:], 'r')  # the "good" part of the filtered signal
    plt.xlabel('time')
    plt.legend(['x', 'filtered x (good part)'])

    # Plot the good part of the filtered signal vs a pure 100hz tone
    plt.figure(3)
    plt.plot(t, x_100hz)  # pure 100hz tone
    plt.plot(t[N-1:]-delay, filtered_x[N-1:], 'r')  # the "good" part of the filtered signal
    plt.xlabel('time')
    plt.legend(['pure 100hz tone', 'filtered x (good part)'])

    plt.show()


""" Write to file """
if enable_write_to_files:
    elem_per_line = 8
    fname = os.path.join(fpath, 'coeff.c')
    write_to_file(fname, arr_name='coeff', arr=coeff, per_line=elem_per_line)

    fname = os.path.join(fpath, 'refOutput.c')
    write_to_file(fname, arr_name='refOutput', arr=filtered_x[N:], per_line=elem_per_line)

    fname = os.path.join(fpath, 'testInput.c')
    write_to_file(fname, arr_name='testInput', arr=x, per_line=elem_per_line)
