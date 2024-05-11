#ifndef _TEST_MAIN_H_
#define _TEST_MAIN_H_


#define N_TAPS          256
// number of samples to process (test assumes N_TAPS/N_SAMPLES is an integer value)
#define N_SAMPLES       128

// undefine or comment out to skip the snr calculation
#define CHECK_SNR
#define SNR_REF_THLD    120


#endif /* _TEST_MAIN_H_ */