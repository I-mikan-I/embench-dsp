
#ifndef DATA_H
#define DATA_H

#include "arm_math.h"

#define N_TAPS          (256)
#define TOTAL_SAMPLES   (257)
#define N_SAMPLES       (1)
#define FRAME_SIZE      (1)
#define N_FRAMES        (1)
#define SNR_REF_THLD    (136)

extern float32_t coeff[N_TAPS];
extern float32_t input[TOTAL_SAMPLES];
extern float32_t output_ref[N_SAMPLES];

#endif  // DATA_H
