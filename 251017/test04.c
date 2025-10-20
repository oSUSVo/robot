#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    int income = 0;                 // 소득액 초기화
    double tax;                     // 세금
    double tax_rate = 0.12;   // 세율 초기화

    income =456;                    // 소득액 저장
    tax = income * tax_rate;        // 세금 계산
    printf("세금은 : %.1lf입니다.\n", tax);
}
/*
    출력 결과
    세금은 : 54.7입니다.
*/