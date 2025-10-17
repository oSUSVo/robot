#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // sizeof 연산자
    int a = 10;
    double b = 3.4;

    printf("int형 변수의 크기 : %d\n", sizeof(a));
    printf("double형 변수의 크기 : %d\n", sizeof(b));
    printf("정수형 상수의 크기 : %d\n", sizeof(10));
    printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5 + 3.4));
    printf("char 자료형의 크기 : %d\n", sizeof(char));

    return 0;
}
/*
    출력 결과
    int형 변수의 크기 : 4
    double형 변수의 크기 : 8
    정수형 상수의 크기 : 4
    수식의 결괏값의 크기 : 8
    char 자료형의 크기 : 1
*/