#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i, j, N;
    printf("N 값을 입력하세요 : ");
    scanf("%d", &N);
    int speed_add = 0;
    int speed_del = 0;

    double speed[N];
    double delta[N];
    
    srand(time(NULL)); // 랜덤 초기화
    
    for (i = 0; i < N; i++) {
        speed[i] = rand() % 100 + 1;
    }
    
    printf("N 번째 속도 \t 현재속도 \t 가속여부 \t 변화량 \t \n");
    printf("%d 번째 속도 \t %.lf km/h \n", 0, speed[0]);
    for (i = 1; i < N + 1; i++) {
        delta[i] = speed[i] - speed[i - 1];
        if (delta[i] >= 0) {
            if (delta[i] > 10) {
                printf("%d 번째 속도 \t %.lf km/h   \t 급가속++\t %.lf\n", i, speed[i], delta[i]);
                speed[i + 1] = speed[i] + (rand() % 10 + 1);
                if (i < N && i > 10) {
                    for (j = i - 10; j < i; j ++) {
                        if (delta[j] < 0) {
                            speed[i + 1] = speed[i] + (rand() % 10 + 1);
                        }
                    }
                }
                else if (i <= 10) {
                    if (speed[1] > 0) {
                        speed[i + 1] = speed[i] + (rand() % 10 + 1);
                    }
                }
                else {
                    speed[i + 1] = rand() % 100 + 1;
                }
                ++speed_add;
            }
            else {
                printf("%d 번째 속도 \t %.lf km/h    \t\t\t %.lf\n", i, speed[i], delta[i]);
                if (i < N && i > 10) {
                    for (j = i - 10; j < i; j ++) {
                        if (delta[j] < 0) {
                            speed[i + 1] = speed[i] + (rand() % 10 + 1);
                        }
                    }
                }
                else if (i <= 10) {
                    if (speed[1] > 0) {
                        speed[i + 1] = speed[i] + (rand() % 10 + 1);
                    }
                }
                else {
                    speed[i + 1] = rand() % 100 + 1;
                }
            }
        }
        if (delta[i] < 0) {
            if (delta[i] < -10) {
                printf("%d 번째 속도 \t %.lf km/h   \t 급제동--\t %.lf\n", i, speed[i], delta[i]);
                if (i < N && i > 10) {
                    for (j = i - 10; j < i; j ++) {
                        if (delta[j] > 0) {
                            speed[i + 1] = speed[i] - 10 + (rand() % 10 + 1);
                        }
                    }
                }
                else if (i <= 10) {
                    if (delta[1] > 0){
                        speed[i + 1] = speed[i] - 10 + (rand() % 10 + 1);
                    }
                }
                else {
                    speed[i + 1] = rand() % 100 + 1;
                }
                ++speed_del;
            }
            else {
                printf("%d 번째 속도 \t %.lf km/h    \t\t\t %.lf\n", i, speed[i], delta[i]);
                if (i < N && i > 10) {
                    for (j = i - 10; j < i; j ++) {
                        if (delta[j] > 0) {
                            speed[i + 1] = speed[i] - 10 + (rand() % 10 + 1);
                        }
                    }
                }
                else if (i <= 10) {
                    if (delta[1] < 0){
                        speed[i + 1] = speed[i] - 10 + (rand() % 10 + 1);
                    }
                }
                else {
                    speed[i + 1] = rand() % 100 + 1;
                }
            }
        }
        if (speed[i + 1] < 0) {
            speed[i + 1] = speed[i] + rand() % 10 + 1;
        }
    }
    printf("\n급가속 횟수 \t %d, 급제동 횟수 \t %d\n", speed_add, speed_del);

    return 0;
}