#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // 사전 선정 정보
    int I_load = 8;     // 평균 전류 A
    double vel = 6.4;
    double R = 0.1;

    // 배터리 정보
    int V = 8;
    int C = 80;
    float eta = 0.95;

    float E_usable = V * C * eta * (1 - R);   // 사용가능 에너지 (Wh)
    float P = V * I_load / eta;          // 소비전력 (W)
    float t = E_usable / P;          // 런타임 (h)
    float d = vel * t;          // 주행거리 (km)

    printf("------------사전 선정 정보-------------\n");
    printf("평균전류 I_load [A] (부하측): %d\n", I_load);
    printf("평균속도 vel [km/h]: %.1lf\n", vel);
    printf("예비율 R [20\% = 0.2]: %.1lf\n", R);
    printf("\n");
    printf("--------------배터리 정보-------------\n");
    printf("공칭전압 V [V]: %d\n", V);
    printf("용량 C [Ah]: %d\n", C);
    printf("시스템 효율 eta [90\% = 0.9]: %.2lf\n", eta);
    printf("\n");
    printf("[결과]\n");
    printf("사용 가능 에너지 E_usable : %.2lf Wh\n",E_usable);
    printf("런타임 t\t\t\t\t: %.2lf (%.1lf min)\n", t, 60 * t);
    printf("주행거리 d\t\t\t\t: %.2lf km\n",d);
    return 0;
}
/*
평균 전류   8 A
평균 속도   6.4 km/h
예비율      0.1
전압        8 V
용량        8 A
시스템 효율 95%
*/