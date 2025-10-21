#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main(void) {
    int sum = 10;   // ❌ 오류 발생!
    printf("%d\n", sum(3, 4));  // 함수처럼 사용할 수도 없음
    return 0;
}
/*
    변수와 함수명이 같으면 오류난다
*/