#include <stdio.h>

int main(void) {
    int a = 10, b = 20; // *pa = 20; (X) 사용못하도록 설정(아래 참조)
    const int *pa = &a; // 포인터로 간접 참조에서 변경 못하도록 설정
                        // 포인터 pa는 변수 a를 가리키게 한다.

    printf("변수 a 값 : %d\n", *pa);// 포인터를 간접 참조하여 a 출력
    pa = &b;                       // 포인터 변수 b를 가리키게 한다.
    printf("변수 b 값 : %d\n", *pa);// 포인터를 간접 참조하여 b 값 출력
    pa = &a;                       // 포인터가 다시 변수 a를 가리킨다.
    a = 30;                        // a를 직접 참조하여 값을 바꾼다
    printf("변수 a 값 : %d\n", *pa);// 포인터로 간접 참조하여 바뀐 값 출력
        
    return 0;
} 