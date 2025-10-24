#include <stdio.h>

void swap(int x, int y);  // 함수 선언

int main(void) {
    int a = 10, b = 20;     
    printf("before - a:%d, b:%d\n", a, b);
    swap(a, b);

    printf("after - a:%d, b:%d\n", a, b);

    return 0;
}

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

/*
    결과
    before - a:10, b:20
    after - a:10, b:20
    변경되지 않는다.
*/