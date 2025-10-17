#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // 형 변환 연산자
    int a = 20, b = 3;
    double res;
    res = ((double)a) / ((double)b);      // (double)을 사용해 a와 b의 값을 실수로 변환
    printf("a = %d, b = %d\n", a, b);
    printf("a / b의 결과 : %1lf\n", res);

    a = (int)res;                       // (int)을 사용해 res의 값에서 정수 부분만 추림
    printf("(int) %.1lf의 결과 : %d\n", res, a);

    return 0;
}
/*
    출력 결과
    a = 20, b = 3
    a / b의 결과 : 6.666667
    (int) 6.7의 결과 : 6
*/