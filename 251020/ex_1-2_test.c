#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // 기획 단계에서 선정하는 요소
    double N = 2; // 구동 바퀴수 : N = 2ea
    double m = 200; // 총 하중(질량) : m = 200 [kg]
    double SF = 2.0; // 안전계수 : SF (Safty Factor) = 2.0
    double DM = 1.2; // 설계마진 : DM (Design Margin) = 1.2

    // 모터 정보
    double R = 107; // 바퀴 반지름 : R = 107 [m]
    double t = 3; // 토크 : t = 3 [N * m]
    double G = 1;// 감속비 : G = 1

    // 상수 및 환경 조건
    // 타이어가 굴러갈 때 저항력(일반적인 상수)
    double c = 0.018; // 구름 저항 계수 : c = 0.018	
    double g = 9.81; // 중력가속도 : g = 9.81 [N * m]
    double W = m * g; // 중량 : W = m * g [N]

    // 필요한 최소 견인력(안전계수 포함):
    double F_min = c * W * SF * DM;
    // 모터가 낼 수 있는 견인력:
    double F_motor = (t * G)/R * N;
    // 모터 적정성 여부 판정
    // F_min <= F_motor
    if (F_min <= F_motor)
    {
        printf("불량");
        return 1;
    }
    else
    {
        printf("구동 바퀴수 (N): "); 
        if (scanf("%lf", &N)!=1) 
        {
            printf("입력이 없으므로 기본값(2)을 사용합니다.\n");
        }
    }
        




    return 0;
    


    // double I_load, vel, R, V, C, eta;

    // // 배터리 사양 및 환경정보 입력
    // printf("------------사전 선정 정보-------------\n");
    // printf("평균전류 I_load [A] (부하측): "); if (scanf("%lf", &I_load)!=1) return 1;
    // printf("평균속도 vel [km/h] : "); if (scanf("%lf", &vel)!=1) return 1;
    // printf("예비율 R [20%% = 0.2] : "); if (scanf("%lf", &R)!=1) return 1;

    // printf("--------------배터리 정보-------------\n");
    // printf("공칭전압 V [V] : "); if (scanf("%lf", &V)!=1) return 1;
    // printf("용량 C [Ah] : "); if (scanf("%lf", &C)!=1) return 1;
    // printf("시스템효율 eta [90%% = 0.9] : "); if (scanf("%lf", &eta)!=1) return 1;

    // // 입력범위 검증
    // if (V<=0 || C<=0 || I_load<=0 || vel<=0 || R<0 || eta<=0 || eta>100) {
    //     printf("입력값 범위를 확인하세요\n");
    //     return 1;    
    // }

    // // 모터 개수
    // double n;

    // // 소비 전력(W)
    // double P = V * I_load / eta;

    // // 사용 가능 에너지 (Wh)
    // double E_usable = V * C * eta * (1 - R);

    // // 런타임 계산 (h)
    // double t_h = E_usable / P;
    // double t_min = t_h / 60;

    // // 주행거리 계산 (km)
    // double d_km = vel * t_h;

    // printf("[결과]\n");
    // printf("사용 가능 에너지 E_usable : %.2f Wh\n",E_usable);
    // printf("런타임 t\t\t\t: %.2f h (%.1lf min)\n", t_h, t_min);
    // printf("주행거리 d\t\t\t: %.2f km\n",d_km);
    // return 0;
}
/*
평균 전류   8 A
평균 속도   6.4 km/h
예비율      0.1
전압        8 V
용량        8 A
시스템 효율 95%
*/