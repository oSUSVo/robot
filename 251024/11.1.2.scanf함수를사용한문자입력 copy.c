#include <stdio.h>

int main(void) {
    char ch1, ch2;

    scanf("1st: %c%c\n", &ch1, &ch2);
    // 2개의 문자를 연속 입력
    printf("[%c%c]", ch1, ch2);
    // 입력된 문자 출력

    return 0;
}