#include <stdio.h>

#define MAX_N 16

// ---- 함수 선언부 ----
// void classify_by_threshold(const int value[], int label[], int n, int threshold);
// int count_black(const int label[], int n);
// double average_index_of_black(const int label[], int n);

// IR 센서 / 적외선 센서
int main(void) {
    int i, threshold;
    double value[100];
    double label[100];
    double black_count = 0;
    double sum_index = 0;
    double index_avg = 0;
    int N;
    // 입력 예시
    // N = 8
    // value = 320 340 980 1010 990 310 305 1000
    // threshold
    printf("---------입력----------\n");
    printf("N값을 입력하세요 : "); scanf("%d",&N);
    printf("value값을 입력하세요 : ");
    for (i=0;i<N;i++) {scanf("%lf",&value[i]);}
    printf("threshold 값을 입력하세요 : "); scanf("%d",&threshold);
    
    for (i=0;i<N;i++) {
        if (value[i] < threshold) {
            label[i] = 1;
        }
        else {
            label[i] = 0;
        }

        black_count += label[i];
        sum_index += (i * label[i]);
    }
    index_avg = sum_index / black_count;

    // 출력 예시
    // label = 1 1 0 0 0 1 1 0
    printf("---------출력---------\n");
    printf("\nlabel = ");
    for (i = 0; i < N; i++)
    {
        printf("%.lf ",label[i]);
    }
    printf("\n");
    // black_count = 4
    printf("black_count = %.lf\n",black_count);
    // index_avg = 2.75
    printf("index_avg = %.2lf\n",index_avg);

    return 0;
}