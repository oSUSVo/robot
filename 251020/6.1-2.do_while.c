#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    int a = 1;

    do
    {
        a = a * 2;          // a의 값을 2배로 늘린다.
    } while (a < 10);       // a가 10보다 작으면 9행 반복
    printf("a : %d\n", a);  // 반복 끝난 후 a 값 출력
    
    return 0;    
}
/*
    출력 결과
    a : 16
*/