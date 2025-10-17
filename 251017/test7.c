#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // 증감연산자
    int a = 10, b = 10;

    // ++a;                    // 변수의 값을 1만큼 증가
    // --b;                    // 변수의 값을 1만큼 감소

    printf("a : %d\n", a++);
    printf("b : %d\n", b--);

    // 전위 연산
    // printf("a : %d\n", ++a); // 11
    // printf("b : %d\n", --b); // 9

    // 후위 연산
    // printf("a : %d\n", a++); // 10
    // printf("b : %d\n", b--); // 10

    return 0;
}
/*
    출력 결과
    a : 11
    b : 9
*/