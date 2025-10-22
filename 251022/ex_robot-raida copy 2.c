#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h> // time을 사용하기 위한 헤더파일

double recall_def(int i, int j);

double main(void) {
    double dist[360];
    double min_num[3];
    int i, j, k; // min_index, min_index2, min_index3;
    // double min_value, min_value2, min_value3, 
    double max_value;

    // srand((unsigned int) time(NULL)); // 난수 초기화
	// for (int i = 0; i< 360; i++) // 10회 반복	
    // {		
    //     dist[i] = rand() % 100 + 1; // 1 ~ 100 사이의 숫자를 뽑아서 random 변수에 저장
    //     printf("%d 번째 : %d\n", i, dist[i]);
    // }
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

    // min_value = max_value;
    // min_value2 = max_value;
    // min_value3 = max_value;
    printf("\n 라이다 최소 거리 탐색 결과\n");
    for (j = 0; j < 3; j++) {
        recall_def(j,max_value,dist[i]);
        printf("가장 가까운 거리: %.1f cm\n", min_value[j]);
        printf("장애물 방향 : %d° \n", min_index[j]);
    }
    return 0;
}

double recall_def(int j, double max_value, double dist[i]){
    int i;
    if (j != 0) {
        recall_def(i, j-1);
        for (j, j < 3; j++) {
            double min_value[j];
            min_value[j] = max_value;
            int min_index[j]; 
            for (i = 0; i < 10; i++) {
                if (dist[i] < min_value[j]) {
                    min_value[j] = dist[i];
                    min_index[j] = i;
                }
            }
        }
    for (j, j < 3; j++) {
        double min_value[j];
        min_value[j] = max_value;
        int min_index[j]; 
        for (i = 0; i < 10; i++) {
            if (dist[i] < min_value[j]) {
                min_value[j] = dist[i];
                min_index[j] = i;
                }
            }
        }
    }
}