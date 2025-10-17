#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // 데이터 입력 - 문자열
    char grade;         // 학점을 입력할 변수
    char name[20];       // 이름을 입력할 배열

    printf("학점 입력 : ");
    scanf("%c", &grade);    // grade 변수에 학점 문자 입력
    printf("이름 입력 : ");
    scanf("%s", name);      // name 배열에 이름 문자열 입력, &를 사용하지 않는다.
    printf("%s의 학점은 %c입니다.\n", name, grade);
}
/*
    입력값
    A
    홍길동

    출력 결과
    홍길동의 학점은 A입니다.
*/