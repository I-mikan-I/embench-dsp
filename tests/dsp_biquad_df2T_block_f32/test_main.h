#ifndef _TEST_MAIN_H_
#define _TEST_MAIN_H_


#ifndef BLOCK_SIZE
#define BLOCK_SIZE      32
#endif


#define CHECK_SNR


#define N_STAGES         2
#define N_SAMPLES       64
#define SNR_REF_THLD    50

#define N_BLOCKS        (N_SAMPLES/BLOCK_SIZE)


#endif /* _TEST_MAIN_H_ */