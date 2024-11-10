
#ifndef DATA_H
#define DATA_H

#include "arm_math.h"

#define N_TAPS          (256)
#define TOTAL_SAMPLES   (384)
#define N_SAMPLES       (128)
#define FRAME_SIZE      (128)
#define N_FRAMES        (1)
#define SNR_REF_THLD    (130)

extern float32_t coeff[N_TAPS];
extern float32_t input[TOTAL_SAMPLES];
extern float32_t output_ref[N_SAMPLES];

#endif  // DATA_H
