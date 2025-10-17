#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // if ~ else문
    int a = 10;

    if (a >= 0)
    {   // a가 9보다 크거나 같으면 a에 1 대입
        a = 1;
    }
    else
    {
        a = -1;     // a가 0보다 작으면 a에 -1 대입
    }

    printf("a : %d\n", a);
    
    return 0;
}
/*
    a : 1
*/