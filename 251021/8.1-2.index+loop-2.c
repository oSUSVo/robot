#include <stdio.h>

// 배열 선언과 사용 / sizeof 연산자 활용
int main(void) {
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);

    for (i = 0; i < count; i++)
    {
        scanf("%d", &score[i]);
    }

    for (i = 0; i < 5; i++)
    {
        total += score[i];
    }
    
    for (i = 0; i < count; i++)
    {
        total += score[i];
    }
    avg = total / (double)count;

    for (i = 0; count; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균 : %.1lf\n", avg);
    
    return 0;
}
/*
    sizeof 연산자를 사용한 배열
*/