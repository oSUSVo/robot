#include <stdio.h>

void auto_func(void);
void static_func(void);

int a;          // 전역변수는 자동으로 초기화

int main(void) {
    int i;

    printf("일반 지역 변수(auto)를 사용한 함수...\n");
    for (i = 0; i < 3; i++)
    {
        auto_func();
    }
    
    printf("정적 지역 변수(static)를 사용한 함수....\n");
    for (i = 0; i < 3; i++)
    {
        static_func();
    }
    
    return 0;
}

void auto_func(void) {
    auto int a = 0;

    a++;
    printf("%d\n", a);
}
void static_func(void) {
    static int a = 0;

    a++;
    printf("%d\n", a);
}
/*
결과
일반 지역 변수(auto)를 사용한 함수...
1
1
1
정적 지역 변수(static)를 사용한 함수....
1
2
3
*/