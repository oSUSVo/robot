#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h> // time을 사용하기 위한 헤더파일

int main(void) {
    double dist[360];
    double min_index[3];
    double min_value[3];
    int i, j, k;
    double max_value = 0;

    printf("\n360 라이다 거리값 입력 \n");
    for (i = 0; i < 10; i++) {
        printf("%3d 거리(cm) : ", i);
        scanf("%lf", &dist[i]);
    }
    // printf("%lf ", dist[1]); // 출력

    for (i = 0; i < 10; i++) {
        if (max_value < dist[i]) {
            max_value = dist[i];
        }
    }

    printf("\n 라이다 최소 거리 탐색 결과\n");
    for (i = 0; i < 3; i++) {
        min_value[i] = max_value;
        for (j = 0; j < 10; j++) {
            if (dist[j] < min_value[i]) {
                if (i != 0, min_value[i] != min_value[i-1]) {
                    min_value[i] = dist[j];
                    min_index[i] = j;
                }
                else if (i = 1) {
                    continue;
                }                
            }
        }
    }
    for (i = 0; i < 3; i++) {
        printf("%d번째 가까운 거리: %.1f cm\n", j, min_value[i]);
        printf("%d번째 가까운 장애물 방향 : %.1f° \n", j, min_index[i]);
    }
    return 0;
}