#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)
#include <string.h> // 문자열(string) 관련 함수들을 사용하기 위해 포함하는 헤더파일

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    char fruit[20] = "strawberry";  // strawberry로 초기화

    printf("%s\n", fruit);      // strawberry 출력
    strcpy(fruit, "banana");    // fruit에 banana 복사
    printf("%s\n", fruit);      // banana 출력

    return 0;
}
/*
    출력 결과
    strawberry
    banana
*/