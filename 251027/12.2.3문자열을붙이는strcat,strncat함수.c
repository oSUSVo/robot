#include <stdio.h>
#include <string.h>

int main(void) {
    char str[80] = "straw"; // 문자열 초기화

    strcat(str, "berry");
    printf("%s\n", str);    // str 배열에 문자열 붙이기
    strncat(str, "piece", 3);
    printf("%s\n", str);    // str 배열에 3개의 문자 붙이기

    return 0;
}
/*
결과
strawberry
strawberrypie
*/