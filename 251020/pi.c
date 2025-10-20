// pi100.c
#include <stdio.h>
#include <mpfr.h>

int main(void) {
    // 100자리 ≈ 333비트 필요. 여유를 두고 400비트 사용
    mpfr_t pi;
    mpfr_init2(pi, 40000000);                 // 40,000,000-bit precision
    mpfr_const_pi(pi, MPFR_RNDN);        // pi 계산 (Round to Nearest)

    // 소수점 아래 정확히 10,000,000자리 출력
    mpfr_printf("%.10000000Rf\n", pi);

    mpfr_clear(pi);
    mpfr_free_cache();
    return 0;
}
