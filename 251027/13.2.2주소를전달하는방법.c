#include <stdio.h>

void add_ten(int *pa);    // 함수 선언

int main(void) {
    int a = 10;

    add_ten(&a); // a값을 복사하여 전달
    printf("a : %d\n", a);

    return 0;
}

void add_ten(int *pa) {   // 6행의 a와 다른 독립적인 저장 공간 할당
    *pa = *pa + 10;         // 14행의 매개변수 a에 10을 더한다.
}