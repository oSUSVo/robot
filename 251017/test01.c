#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    unsigned int a;

    a = 4294967295;     // 큰 양수 저장
    printf("%d\n", a);  // %d로 출력
    a = -1;             // 음수 저장
    printf("%u\n", a);  // %u로 출력

    return 0;
}
/*
    출력 결과
    -1
    4294967295
*/