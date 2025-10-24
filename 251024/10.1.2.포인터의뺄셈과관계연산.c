#include <stdio.h>

int main(void) {
    int ary[5] = { 10, 20, 30, 40, 50 };
    int *pa = ary;
    int *pb = pa + 3;

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);    // pa 값에서 3 * 4 (byte)

    pa++;
    printf("pb - pa : %u\n", pb - pa);

    printf("앞에 있는 배열 요소의 값 출력 ");
    if (pa < pb) printf("*pa : %d\n", *pa);
    else printf("*pb : %d\n",*pb);

    return 0;
}