#include <stdio.h>

int main(void) {
    char str[80];

    printf("공백이 포함된 문자열 입력 : ");
    scanf("%c", str);
    printf("입력한 문자열은 %c입니다.\n", str);

    return 0;
}