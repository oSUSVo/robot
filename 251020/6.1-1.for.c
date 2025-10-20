#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    int a = 1;
    int i;

    for (i = 0; i < 3; i++)
    {
        a = a * 2;
        // printf("Hello Mr.my yesterday\n");
    }
    printf("a : %d\n", a);      // for문을 빠져나오면 a값 출력

    return 0;
}
/*
    출력 결과
    a : 8
*/