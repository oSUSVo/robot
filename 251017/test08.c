#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // 증감연산자
    int a = 5, b = 5;
    int pre, post;

    pre = (++a) * 3;        // 변수의 값을 1만큼 증가
    post = (b++) * 3;       // 변수의 값을 1만큼 감소

    printf("초기값 a = %d, b= %d\n", a, b);
    printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);

    return 0;
}
/*
    출력 결과
    초기값 a = 6, b= 6
    전위형: (++a) * 3 = 18, 후위형: (b++) * 3 = 15
*/