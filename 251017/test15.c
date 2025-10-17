#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // 연산자 우선순위
    int a = 10, b = 5;
    int res;

    res = a / b * 2;            // 우선순위가 같으므로 왼쪽부터 차례로 연산
    printf("res = %d\n", res);
    res = ++a * 3;              // a의 값을 1 증가 시키고 3을 곱한다
    printf("res = %d\n", res);
    res = a > b && a != 5;      // a > b의 결과와  a != 5의 결과를 && 연산
    printf("res = %d\n", res);
    res = a % 3 == 0;           // a % 3 의 값이 0과 같은지 확인
    printf("res = %d\n", res);

    return 0;
}
/*
    출력 결과
    es = 4
    res = 33
    res = 1
    res = 0
*/