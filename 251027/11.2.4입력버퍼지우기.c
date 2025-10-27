#include <stdio.h>

int main(void) {
    int num, grade;

    printf("학번 입력 : ");
    scanf("%d", &num);      // 학번 입력
    getchar();              // 버퍼에 남아 있는 개행 문자 제거
    printf("학점 입력 : "); 
    grade = getchar();      // 학점 입력
    printf("학번 : %d, 학점 : %c\n", num, grade);

    return 0;
}
/*
출력
학번 입력 : 315
학점 입력 : A
학번 : 315, 학점 : A
*/