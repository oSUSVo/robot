#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // 연산 결과값을 처리 방법
    int a = 10, b = 20, c = 10, res;

    a + b;
    printf("%d + %d = %d\n", a, b, a + b);
    
    res = a + b;
    printf("%d + %d = %d\n", a, b, res);

    ++a + b;
    printf("++a + b = %d\n", ++a + b);

    return 0;
}
/*
    출력 결과

*/