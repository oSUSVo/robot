#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    char fruit[20] = "strawberry";              // char 배열 언어 선언과 문자열 초기화

    printf("딸기 : %s\n", fruit);               // 배열명으로 저장된 문자열 출력
    printf("딸기잼 : %s %s\n", fruit, "jam");   // 문자열 상수를 직접 %s로 출력

    return 0;
}
/*
    출력 결과
    딸기 : strawberry
    딸기잼 : strawberry jam
*/