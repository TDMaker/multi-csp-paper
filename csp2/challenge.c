#include <gmp.h>
#include "../utils/randys.h"
#define BASE_PATH "../swap"
#define SOURCED_FILE_NAME "the-sun-also-rises.mp3"
#define FILE_TMP_PATH BASE_PATH "/%s.r2"
#define SECURITY_LEVEL 160
int main()
{
    FILE *fp;
    unsigned char file_path_buf[128] = {0};
    mpz_t num_r;
    gmp_randstate_t state;
    mpz_init(num_r);
    gmp_randinit_mt(state);
    size_t *seed = (size_t *)malloc(sizeof(size_t));
    memset(seed, 0, sizeof(size_t));
    read_str_from_file((unsigned char *)seed, sizeof(size_t), "/dev/urandom", fp);

    gmp_randseed_ui(state, *seed);
    mpz_urandomb(num_r, state, SECURITY_LEVEL);

    sprintf(file_path_buf, FILE_TMP_PATH, SOURCED_FILE_NAME);
    fp = fopen(file_path_buf, "w");
    mpz_out_str(fp, 10, num_r);
    free(seed);
    mpz_clear(num_r);
    return 0;
}