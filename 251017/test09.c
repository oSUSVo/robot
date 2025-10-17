#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // 관계연산자
    int a = 10, b = 20, c = 10;
    int res;        // 결괏값을 저장할 변수
                    // 각각 a와 b, c 값을 대입
    res = (a > b);  // 10 > 20은 거짓이므로 결괏값은 0
    printf("a > b : %d\n", res);
    res = (a >= b); // 10 >= 20은 거짓이므로 결괏값은 0
    printf("a >= b : %d\n", res);
    res = (a < b);  // 10 < 20은 거짓이므로 결괏값은 1
    printf("a < b : %d\n", res);

    return 0;
}
/*
    출력 결과
    a > b : 0
    a >= b : 0
    a < b : 1
*/