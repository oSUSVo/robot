#include <stdio.h>

int main(void) {
    int a;
    int *pa;

    a = 10;
    pa = &a;

    printf("before value : %d\n", a);
    printf("before add : %d\n", &a);
    printf("before p stores : %d\n", pa);

    *pa = 20;
    printf("after : %d\n", a);
    printf("after add : %d\n", &a);
    printf("after p stores : %d\n", pa);

    return 0;
}