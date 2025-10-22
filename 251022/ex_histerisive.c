#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i, N;
    double battery[100];
    int warning = 0; // 0: OFF, 1: ON
    double level, ON, OFF;
    ON = 1;
    OFF = 0;

    printf("--------입력 조건---------\n");
    printf("배터리 갯수 : ");
    scanf("%d", &N);
    printf("배터리 잔량 로그(%%) : ");
    for (i = 0; i < N; i++) {
        scanf("%lf", &battery[i]);
    }
    
    // srand(time(NULL)); // 랜덤 초기화
    // for (i = 0; i < 100; i++)
    // {
    //     battery[i] = rand() % 100 + 1;
    //     level = battery[i];
    //     printf("%.lf\n",level);
    // }
    printf("\n[배터리 히스테리시스 경보 결과]\n");
    
    for (i = 0; i < N; i++)
    {
        level = battery[i];

        if (warning == OFF && level <= 30) {
            warning = ON;
            printf("배터리 잔량 : %.lf, 상태 : %d\n", battery[i], warning);
        }
        else if (warning == ON && level >= 35) {
            warning = OFF;
            printf("배터리 잔량 : %.lf, 상태 : %d\n", battery[i], warning);
        }
        else {
            printf("배터리 잔량 : %.lf, 상태 : %d\n", battery[i], warning);
            continue;
        }
    }

    return 0;
}