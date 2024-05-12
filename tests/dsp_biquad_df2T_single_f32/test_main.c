#include <stdint.h>
#include <stdio.h>

// includes for every benchmark
#include "boardsupport.h"

// includes for this benchmark
#include "test_main.h"
#include "test_data.h"
#include "embench_math.h"
#include "math_helper.h"

/**
 * @brief Filter Input, Output, and Reference Output
 *      - See data/
 */

// Input Samples
extern float32_t testInput[N_INITIAL + N_SAMPLES];

// Test Result
static float32_t testOutput[N_SAMPLES];

// Golden Reference
extern float32_t refOutput[N_SAMPLES];



/**
 * @brief Filter Coefficients & State
 */

// State Vector
static float32_t filter_state [2*N_STAGES];

// Coefficient Array
extern const float32_t coeff[5*N_STAGES];



/**
 * @brief test_main
 * 
 */
int __attribute__ ((used)) test_main (int argc __attribute__ ((unused)), char *argv[] __attribute__ ((unused)))
{
    uint32_t ccnt;
    uint32_t fail_count = 0;
    float32_t initialOutput[N_INITIAL];

    // filter initialization
    embench_biquad_cascade_df2T_instance_f32 filter_S;
    embench_biquad_cascade_df2T_init_f32(&filter_S, N_STAGES, coeff, filter_state);

    // ignore the noisy outputs due to initial conditions
    embench_biquad_cascade_df2T_f32(&filter_S, testInput, initialOutput, N_INITIAL);

    // begin profiling
    start_trigger();

    embench_biquad_cascade_df2T_f32(&filter_S, testInput + N_INITIAL, testOutput, N_SAMPLES);

    // end profiling
    stop_trigger();

    // get the cycle count
    ccnt = get_ccnt();

#ifdef CHECK_SNR
    // calculate SNR of test output vs matlab reference output
    float32_t snr;
    snr = snr_f32(refOutput, testOutput, N_SAMPLES);

    // check correctness (if reference and actual filter outputs matched)
    fail_count += !(snr > SNR_REF_THLD);

    // print to a python list, useful for debug
    // uint32_t ptr;
    // for (ptr = 0; ptr < N_SAMPLES; ptr++)
    // {
    //     if (ptr == 0)
    //         printf("testOutput = [%f, ", *(testOutput + ptr));
    //     else if (ptr == (N_SAMPLES-1))
    //         printf("%f]\n", *(testOutput + ptr));
    //     else
    //         printf("%f,", *(testOutput + ptr));
    // }
#endif

    if (fail_count)
        printf("TEST FAIL\nCCNT = %i\n", ccnt);
    else
        printf("TEST PASS\nCCNT = %i\n", ccnt);

    return !(fail_count == 0);
}
