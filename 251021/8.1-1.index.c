#include <stdio.h>

// 배열 선언
int main(void) {
    int ary[5];     // int형 요소 5개 배열 선언
                    // ary는 array 축약어
    ary[0] = 10;    // 첫번째 배열 10
    ary[1] = 20;    // 두번째 배열 20
    ary[2] = ary[0] + ary[1];   // 1, 2 배열 더한 3번째
    scanf("%d", &ary[3]);       // 키보드로 입력값 받음

    printf("%d\n", ary[2]);     // 세번째요소 출력
    printf("%d\n", ary[3]);     // 4번째 요소 출력
    printf("%d\n", ary[4]);     // 5번째는 값이 없음 / 쓰레기 값

    return 0;
}
/*
    변수와 함수명이 같으면 오류난다
*/