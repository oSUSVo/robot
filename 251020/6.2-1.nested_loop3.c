#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    int i, j;                   // 반복 횟수를 세기 위한 제어 변수
    int n = 5;

    for (i = 0; i < n; i++)     // i가 0부터 2까지 증가하면서 3번 반복
    {
        int a;
        for (a = 0; a < i; a++)
        {
            /* code */
            printf(" ");
        }
                
        for (j = 0; j < n - i; j++) // j가 0부터 4까지 증가하면서 5번 반복
        {
            printf("*");        // 별 출력문
        }
        printf("\n");           // 별을 5번 출력한 후에 줄을 바꾼다.
    }

    return 0;                   // 프로그램 정상 종료
}
/*
    출력 결과
    *****
    *****
    *****
*/