#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    char grade;         //
    char name[20];       //

    printf("학점 입력 : ");
    scanf("%c", &grade);
    printf("이름 입력 : ");
    scanf("%s", name);
    printf("%s의 학점은 %c입니다.\n", name, grade);
}
/*
    입력값
    A
    홍길동

    출력 결과
    홍길동의 학점은 A입니다.
*/