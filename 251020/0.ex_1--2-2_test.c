#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    double N, m, SF, DM;
    // 기획 단계에서 선정하는 요소
    printf("----------------이동로봇 설계 사양----------------\n");
    // 총 하중(질량) : m = 200 [kg]
    printf("총 하중(질량) : "); 
    if (scanf("%lf", &m)!=1) return 1;

    // 구동 바퀴수 : N = 2ea
    printf("구동 바퀴 수 : "); 
    if (scanf("%lf", &N)!=1) return 1;

    // 안전계수 : SF (Safty Factor)
    printf("안전계수 : "); 
    if (scanf("%lf", &SF)!=1) return 1;

    // 설계마진 : DM (Design Margin) = 1.2
    printf("설계마진 (20%% == 1.2로 입력) : "); 
    if (scanf("%lf", &DM)!=1) return 1;

    // 모터 정보
    double t, R, G;
    printf("----------------모터 및 바퀴 사양----------------\n");

    // 토크 : t = 3 [N * m]
    printf("모터 정격 토크 (N.m): "); 
    if (scanf("%lf", &t)!=1) return 1;

    // 감속비 : G = 1
    printf("감속비 : "); 
    if (scanf("%lf", &G)!=1) return 1;

    // 바퀴 반지름 : R = 107 [m]
    printf("바퀴 반지름 (m) : "); 
    if (scanf("%lf", &R)!=1) return 1;

    printf("---------------------------------------------\n");

    // 상수 및 환경 조건
    // 타이어가 굴러갈 때 저항력(일반적인 상수)
    const double c = 0.018; // 구름 저항 계수 : c = 0.018	
    const double g = 9.81; // 중력가속도 : g = 9.81 [N * m]
    // double W = m * g; // 중량 : W = m * g [N]

    // // 필요한 최소 견인력(안전계수 포함):
    // double F_min = c * W * SF * DM;
    // // 모터가 낼 수 있는 견인력:
    // double F_motor = (t * G)/R * N;
    // // 모터 적정성 여부 판정
    // // F_min <= F_motor
        
    double W = m * g;
    double F_min = c * W * SF * DM;
    double F_motor = (t * G / R) * N;

    // 입력 받은 값으로 견인력 계산
    printf("[결과]\n");
    printf("필요한 최소 견인력: %.2lf N\n", F_min);
    printf("모터가 낼 수 있는 견인력: %.2lf N\n", F_motor);
    printf("판정 : ");
    if (F_motor >= F_min) {
        printf("견인력이 충분합니다\n");
        return 1;
    } else {
        printf("불만족 (더 큰 모터나 감속비가 필요합니다!)\n");
    }
    return 0;
}
/*

*/