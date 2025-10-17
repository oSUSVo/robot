#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    int a;

    scanf("%d", &a);               // 여기서 변수 a에 값 입력
    printf("임력된 값 : %d\n", a);   // 입력한 값 출력

    return 0;
}
/*
    입력값
    10

    출력 결과
    입력된 값 : 10
*/