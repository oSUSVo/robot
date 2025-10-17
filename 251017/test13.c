#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // 조건 연산자
    int a = 10, b = 20, res;

    res = (a > b) ? a : b;  // a와 b 중에 큰 값이 res에 저장
    printf("큰 값 : %d\n", res);

    return 0;
}
/*
    출력 결과
    큰 값 : 20
*/