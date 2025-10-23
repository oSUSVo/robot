#include <stdio.h>

#define MAX_DIGITAL 1023

int adc_to_voltage(double V[], int i, int N, int adc[], int Vref);
int voltage_to_distance(double d[], int k, int i, int N,double V[]);

// ADC = 아날로그를 digital로 변환
int main(void) {
    int i, N;
    double Vref = 5.0, k = 27.0;

    // 입력 예시
    // N = 5
    // adc = 120 350 500 800 1023
    // Vref = 5.0
    // k = 27.0
    printf("ADC 값의 개수 입력 : "); 
    scanf("%d", &N);

    int adc[N];
    printf("센서로부터 읽은 ADC 값 입력 : "); 
    for (i=0;i<N;i++) {
        scanf("%d", &adc[i]);
        if (adc[i] > MAX_DIGITAL) {printf("오류\n"); return -1;}
    }
    
    printf("기준 전압 입력(default: 5.0V) : "); scanf("%lf", &Vref);
    printf("거리 변환 상수 (센서 모델에 따라 다름) 입력(default:27.0) : "); scanf("%lf", &k);

    // 전압식 V = adc / 1023 * Vref
    // 거리 변환식 d = k / V
    double V[N], d[N];
    for (i=0;i<N;i++) {
        V[i] = (double)adc[i] / 1023 * Vref;
        d[i] = k / V[i];
    }

    // 출력 예시
    // ADC     -> 120      350     500     800     1023
    // 전압(V) ->  0.59    1.71    2.44    3.91    5.00
    // 거리(cm)->  45.76   15.79   11.06   6.90    5.40
    printf("---- 출력 ----\n");
    printf("ADC \t\t ->\t");
    for (i=0;i<N;i++) {
        printf("%d \t", adc[i]);
    }
    printf("\n전압(V) \t ->\t");
    for (i=0;i<N;i++) {
        printf("%.2lf \t", V[i]);
    }
    printf("\n거리(cm) \t ->\t");
    for (i=0;i<N;i++) {
        printf("%.2lf \t", d[i]);
    }
    printf("\n");

    return 0;
}
int adc_to_voltage(double V[], int i, int N, int adc[], int Vref) {
    for (i=0;i<N;i++) {
        V[i] = (double)adc[i] / 1023 * Vref;
    }
}

int voltage_to_distance(double d[], int k, int i, int N,double V[]) {
    for (i=0;i<N;i++) {
        d[i] = k / V[i];
    }
}