#include <stdio.h>

void swap(int *pa, int *pb);  // 함수 선언

int main(void) {
    int a = 10, b = 20;
    
    printf("before - a:%d, b:%d\n", a, b);
    swap(&a, &b);

    printf("after - a:%d, b:%d\n", a, b);

    return 0;
}

void swap(int *pa, int *pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}