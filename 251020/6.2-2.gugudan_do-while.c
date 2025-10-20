#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    int i = 1;

    do
    {
        i++;
        int j = 1;
        do
        {
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        } while (j < 10);
        printf("--------------------------------\n");
    } while (i < 9);
    
    
    return 0;               // 프로그램 정상 종료
}
/*
    출력 결과
*/