#include <stdio.h>

#define MAX_N 16

// ---- 함수 선언부 ----
void classify_by_threshold(const int value[], int label[], int n, int threshold);
int count_black(const int label[], int n);
double average_index_of_black(const int label[], int n);

// IR 센서 / 적외선 센서
int main(void) {
    int N, threshold;
    int value[MAX_N];
    int label[MAX_N];
    int black_count = 0;
    int sum_index = 0;
    int index_avg = 0;

    // 입력 예시
    // N = 8
    // value = 320 340 980 1010 990 310 305 1000
    // threshold
    printf("---------입력----------\n");
    // 센서 개수 입력
    printf("센서 값 %d개 입력 : ", MAX_N); scanf("%d",&N);

    // 센서 값 입력
    printf("센서 값을 입력 : ", N);
    for (int i=0;i<N;i++) {scanf("%d",&value[i]);}

    // 임계값 입력
    printf("임계 값을 입력하세요 : "); scanf("%d",&threshold);
    
    classify_by_threshold(value, label, N, threshold); // 라인 판별 처리
    
    int black_count = count_black(label, N); // 검정 감지 개수

    // 라인 중심 위치 계산
    double center = average_index_of_black(label, N);

    // 출력 결과
    // label = 1 1 0 0 0 1 1 0
    printf("---------출력---------\n");
    printf("\nlabel = ");
    for (int i = 0; i < N; i++)
    {
        printf("%.lf ",label[i]);
    }
    printf("\n");
    // black_count = 4
    printf("black_count = %.lf\n",black_count);
    // index_avg = 2.75
    if (black_count == 0) 
        printf("라인 없음\n");
    else
        printf("index_avg = %.2lf\n",index_avg);

    return 0;
}

// 임계값으로 분류
void classify_by_threshold(const int value[], int label[], int n, int threshold) {
    for (int i = 0; i < n; i++) {
        if (value[i] < threshold)
            label[i] = 1;
        else  
            label[i] = 0;
    }
}

// 검정 감지 개수 계산
int count_black(const int label[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += label[i];
    }
    return cnt;
}

// 라인 중심 계산
double average_index_of_black(const int label[], int n) {
    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        sum += i * label[i];
        cnt += label[i];
    }

    if (cnt == 0) return -1.0;
    return (double) sum / cnt;
}