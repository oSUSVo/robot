#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // if ~ else if ~ else문
    int a = 0, b = 0;

    if (a > 0)
    {
        b = 1;
    }
    else if (a == 0)
    {
        b = 2;
    }
    else
    {
        b = 3;
    }

    printf("b : %d\n", b);      // if문으로 결정된 b 값 출력
    
    return 0;
}
/*
    b : 2
*/