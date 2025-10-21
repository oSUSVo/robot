#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)
#include <math.h>   // 수학 표준 헤더파일

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{   
    double m, Tm, G, eta, r, c, SF;
    int Nm;
    const double g = 9.81;

    // 입력값 입력
    printf("무게: "); scanf("%lf", &m);
    printf("모터 정격토크: "); scanf("%lf", &Tm);
    printf("구동 모터 수: "); scanf("%d", &Nm);
    printf("감속비: "); scanf("%lf", &G);
    printf("구동효율: "); scanf("%lf", &eta);
    printf("바퀴 반지름: "); scanf("%lf", &r);
    printf("구름계수: "); scanf("%lf", &c);
    printf("안전계수: "); scanf("%lf", &SF);

    printf("--------------- 입 력 값 ----------------\n");
    printf("무게: %.lf\n", m);
    printf("모터 정격토크: %.2lf\n", Tm);
    printf("구동 모터 수: %.d\n", Nm);
    printf("감속비: %.lf\n", G);
    printf("구동효율: %.2lf\n", eta);
    printf("바퀴 반지름: %.3lf\n", r);
    printf("구름계수: %.3lf\n", c);
    printf("안전계수: %.1lf\n", SF);
    printf("---------------------------------------\n");

    // 수식
    double Ttot = Nm * Tm * G * eta;
    double F_avail = Ttot / r;
    double mg = m * g;

    // 등판 최대각 (안전계수 적용)
    double sin_theta = (F_avail/SF - c * mg) / mg;
    double F_need = mg * sin(sin_theta) + c * mg;
    if (sin_theta < 0.0) sin_theta = 0.0;
    if (sin_theta > 1.0) sin_theta = 1.0;
    
    double theta_rad = asin(sin_theta);
    double theta_deg = theta_rad * 180.0 / M_PI;
    double grade_pct = tan(theta_rad) * 100.0;

    // 결과 출력
    printf("가용 견인력 : %.2lf N\n", F_avail);  // 가용 견인력
    printf("최대각 : %.2lf\n", theta_deg);   // theta_max
    printf("등판율 : %.1lf %%\n", grade_pct);   // grade - 등판율

    return 0;
}

/*
    출력 결과
*/