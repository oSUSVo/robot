#include <stdio.h>

int main(void) {
    int a;      // int형 변수 선언
    double b;   // double형 변수 선언
    char c;     // char형 변수 선언

    printf("int형의 변수 주소 %p\n", &a);       // 주소 연산자로 주소 계산
    printf("double형의 변수 주소 %p\n", &b);
    printf("char형의 변수 주소 %p\n", &c);

    return 0;
}