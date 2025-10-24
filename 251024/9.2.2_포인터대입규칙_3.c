#include <stdio.h>

// *pd 선언을 double 로 유지
int main(void) {
    int a = 10;         // 변수 선언과 최기화
    int *p = &a;        // 포인터 선언과 동시에 a를 가리키도록 초기화
    double *pd;         // int형 변수를 가리키는 포인터

    pd = p;    // 포인터 p 값을 double형 변환해서 포인터 pd에 대입
    printf("*pd : %d\n", *(int*)pd); // pd가 가리키는 변수의 값 출력
    printf("p : %d\n", *p);   // p가 가리키는 변수의 값 출력
    printf("d : %d\n", a);    // a 변수의 값 출력
}