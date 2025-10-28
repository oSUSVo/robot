#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pi;
    int i, sum = 0;

    pi = (int *)malloc(5 * sizeof(int));
    if (pi == NULL) {
        printf("메모리가 부족합니다.\n");
        exit(1);
    }   // 메모리가 부족할 때의 예외처리 구문
    printf("다섯 명의 나이를 입력하세요 : ");
    
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &pi[i]);
        sum += pi[i];
    }
    printf("다섯 명의 평균 나이 : %.1lf\n", sum/ 5.0);
    free(pi);

    return 0;
}
/*
결과
다섯 명의 나이를 입력하세요 : 21 27 24 22 35
다섯 명의 평균 나이 : 25.8
*/