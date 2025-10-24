#include <stdio.h>

void swap(void);  // 함수 선언
int a = 10, b = 20; // 변수를 외부에서 선언

int main(void) {
    
    printf("before - a:%d, b:%d\n", a, b);
    swap();

    printf("after - a:%d, b:%d\n", a, b);

    return 0;
}

void swap(void) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}