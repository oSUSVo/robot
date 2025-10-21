#include <stdio.h>

// 배열과 반복문
int main(void) {
    int score[5];
    int i;
    int total = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);
    }

    for (i = 0; i < 5; i++)
    {
        total += score[i];
    }
    double avg;
    avg = total / 5.0;

    for (i = 0; i < 5; i++)
    {
        printf("%d 번째 %5d", i, score[i]);
    }
    printf("\n");

    printf("평균 : %.1lf\n", avg);
    
    return 0;
}
/*
    배열과 반복문을 사용한 성적 처리 프로그램
*/