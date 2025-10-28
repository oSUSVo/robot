#include <stdio.h>

struct student  // struct = 예약어, student = 구조체 이름
{
    int num;        // 구조체 멤버
    double grade;   // 
};

int main(void) {
    struct student s1;

    s1.num = 2;
    s1.grade = 2.7;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);

    return 0;    
}
/*
결과
학번 : 2
학점 : 2.7
*/