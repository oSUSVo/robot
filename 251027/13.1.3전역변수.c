#include <stdio.h>

void assign10(void);
void assign20(void);

int a;          // 전역변수는 자동으로 초기화

int main(void) {
    printf("함수 호출 전 a 값 : %d\n", a);
    
    assign10();
    assign20();

    printf("함수 호출 후 a 값 : %d\n", a);

    return 0;
}

void assign10(void) {
    a = 10;
}

void assign20(void) {
    int a;

    a = 20;         // 반환 없음
}
/*
전역변수
 이름이 바뀌면 사용 함수의 모든 이름을 찾아 바꿔야 한다.
 값이 이상하면 접근 가능한 모든 함수를 살펴야 한다.
 같은 이름의 지역 변수에 의해 사용 범위가 제한 된다.
*/