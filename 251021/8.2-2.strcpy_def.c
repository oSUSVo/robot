#include <stdio.h>
#include <string.h>             // 문자열 관련 함수 원형을 모아 놓은 헤더 파일

// 문자열 대입
int main(void) {
    char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger");  // str1 배열 "tiger" 복사
    strcpy(str2, str1);     // str2 배열에 str1 배열의 문자열 복사

    printf("%s, %s\n", str1, str2);

    return 0;
}
/*
    문자열을 대입하는 strcpy 함수
*/