#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double dist[360];
int i, j, k, min_index;
double min_value, max_value = 0;

double test();

double main(void) {
    double dist[360];
    int i, j, k, min_index;
    double min_value, max_value = 0;

    printf("\n360 라이다 거리값 입력 \n");
    for (i = 0; i < 10; i++) {
        printf("%3d 거리(cm) : ", i);
        scanf("%lf", &dist[i]);
    }

    for (i = 0; i < 10; i++) {
        if (max_value < dist[i]) {
            max_value = dist[i];
        }
    }
    printf("\n 라이다 최소 거리 탐색 결과\n");
    for (i = 0; i < 10; i++) {
        test();
    }
    
    printf("가장 가까운 거리: %.1f cm\n", min_value);
    printf("장애물 방향 : %d° \n", min_index);
    return 0;
}

double test() {
    
    double min_value = max_value;
    double min_index;

    if (dist[i] < min_value) {
        min_value = dist[i];
        min_index = i;
        return min_value, min_index;
    }
    return 0;
}