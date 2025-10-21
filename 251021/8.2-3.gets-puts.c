#include <stdio.h>
#include <string.h>             // 문자열 관련 함수 원형을 모아 놓은 헤더 파일

// 문자열 전용 입룰력 함수 : gets, puts
int main(void) {
    char str[80];

    printf("문자열 입력 : ");   // 입력 안내 메시지 출력
    gets(str);               // 빈칸을 포함한 문자열 입력
    printf("입력된 문자열 : ");  // 문자열 상수 출력
    puts(str);              // 배열에 저장된 문자열 출력

    return 0;
}
/*
    빈칸을 포함한 문자열 입력
*/