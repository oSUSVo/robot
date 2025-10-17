#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // if 문
    int a = 20;
    int b = 0;

    if (a > 10)     // 조건식 : a가 10보다 크므로 조건식은 참
    {
        b = a;      // 실행문 : b = a 대입문 실행
    }
    // if (a > 10) b = a; // 와 같이 한 문장이면 중괄호 생략 가능

    printf("a : %d, b : %d\n", a, b);   // 대입이 수행되면 두 값은 같음
    return 0;
}
/*
    a : 20, b : 20
*/