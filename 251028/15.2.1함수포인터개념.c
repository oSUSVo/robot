#include <stdio.h>

int sum(int, int);

int main(void) {
    int (*fp)(int, int);
    int  res;

    fp = sum;
    res = fp(10,20);
    printf("result : %d\n", res);
    return 0;
}

int sum(int a, int b) { // 함수명도 주소다

    return a + b;
}