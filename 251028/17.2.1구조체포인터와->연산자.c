#include <stdio.h>

struct score
{
    int kor;
    int eng;
    int math;
};

int main(void) {
    struct score yuni = { 90, 80, 70 };
    struct score *ps = &yuni;
    // struct score 가 가리키는 것은 struct score 구조체
    // *ps = ps 포인터

    printf("국어 : %d\n", (*ps).kor);
    printf("영어 : %d\n", ps -> eng);
    printf("수학 : %d\n", ps -> math);

    return 0;    
}

/*
출력
국어 : 90
영어 : 80
수학 : 70
*/