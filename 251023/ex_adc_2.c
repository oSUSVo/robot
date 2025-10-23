#include <stdio.h>

#define MAX_N 10

void adc_to_voltage(int adc[], double voltage[], int n, double vref);
void voltage_to_distance(double voltage[], double distance[], int n, double k);
void print_array_double(double arr[], int n);

// ADC = 아날로그를 digital로 변환
int main(void) {
    int N;
    int adc[MAX_N];
    double voltage[MAX_N];
    double distance[MAX_N];
    double Vref, k;

    // 입력 예시
    // N = 5
    // adc = 120 350 500 800 1023
    // Vref = 5.0
    // k = 27.0
    printf("ADC 값의 개수 입력 (1~%d) : ", MAX_N); 
    scanf("%d", &N);

    printf("ADC 값 %d개 입력 (0~1023) : ", N); 
    for (int i=0;i<N;i++) {
        scanf("%d", &adc[i]);
    }
    
    printf("기준 전압 입력 (예: 5.0) : "); scanf("%lf", &Vref);
    printf("거리 변환 상수 입력 (예: 27.0)  : "); scanf("%lf", &k);

    // 전압식 V = adc / 1023 * Vref
    // 거리 변환식 d = k / V
    adc_to_voltage(adc, voltage, N, Vref);
    voltage_to_distance(voltage, distance, N, k);

    // 출력 예시
    // ADC     -> 120      350     500     800     1023
    // 전압(V) ->  0.59    1.71    2.44    3.91    5.00
    // 거리(cm)->  45.76   15.79   11.06   6.90    5.40
    printf("---- 출력 ----\n");
    // printf("ADC \t\t ->\t");
    // for (i=0;i<N;i++) {
    //     printf("%d \t", adc[i]);
    // }
    printf("\n전압(V) \t ->\t");
    print_array_double(voltage, N);

    printf("\n거리(cm) \t ->\t");
    print_array_double(distance, N);

    return 0;
}

// ----- 함수 정의부 -----

// ADC -> 전압 변환
void adc_to_voltage(int adc[], double voltage[], int n, double vref) {
    for (int i=0;i<n;i++) {
        voltage[i] = (adc[i] / 1023.0) * vref;
        if (voltage[i] < 0.01)  //0 나눗셈 방지용 최소 전압
            voltage[i] = 0.01;
    }
}

// 전압 → 거리 변환
void voltage_to_distance(double voltage[], double distance[], int n, double k) {
    for (int i = 0; i < n; i++) {
        distance[i] = k / voltage[i];
}
}
// 배열 출력 함수
void print_array_double(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}