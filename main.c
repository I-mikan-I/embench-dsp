#include <stdint.h>
#include <stdio.h>

extern int test_main();


/**
 * @brief main
 * 
 */
int __attribute__ ((used)) main (int argc __attribute__ ((unused)), char *argv[] __attribute__ ((unused)))
{
    uint32_t res = test_main();

    if (res)
        printf("\nTEST FAIL\n");
    else
        printf("\nTEST PASS\n");

    return res;
}
