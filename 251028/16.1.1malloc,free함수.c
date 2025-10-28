#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int));
    // pi = int형을 가리키는 포인터에 저장
    // (int *) = 반환되는 주소를 int형 변수의 주소로 형 변환
    // malloc(sizeof(int)) = 저장공간을 할다하고 (void *)형 변환
    // sizeof(int) = int형 변수의 크기

    if (pi == NULL) {
        printf("# 메모리가 부족합니다.\n");
        exit(1);
    }
    pd = (double *)malloc(sizeof(double));
    
    *pi = 10;
    *pd = 3.4;

    printf("정수형으로 사용 : %d\n", *pi);
    printf("실수형으로 사용 : %.1lf\n", *pd);

    free(pi);
    free(pd);

    return 0;
}
/*
결과
정수형으로 사용 : 10
실수형으로 사용 : 3.4
*/

/*
malloc = memory allocation

*/