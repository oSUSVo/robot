#include <stdio.h>

int main(void) {
    char str[] = "Hello";
    char *p = "Hello";  // 주소가 아니라서
    p[0]='a';   // 동작안함
    str[0]='a';
    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }
    return 0;
} 