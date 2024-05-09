#ifndef _TEST_MAIN_H_
#define _TEST_MAIN_H_


#ifndef BLOCK_SIZE
#define BLOCK_SIZE      64
#endif


#define CHECK_SNR
#define SNR_REF_THLD    50


#define N_TAPS          256
#define N_SAMPLES       BLOCK_SIZE

#define N_BLOCKS        (N_SAMPLES/BLOCK_SIZE)


#endif /* _TEST_MAIN_H_ */