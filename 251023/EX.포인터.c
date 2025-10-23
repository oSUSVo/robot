#include <stdio.h>

int main(void) {
    int a;
    int *pa;

    a = 10;
    pa = &a;

    printf("before : %d\n", a);

    *pa = 20;
    printf("after : %d\n", a);

    return 0;
}