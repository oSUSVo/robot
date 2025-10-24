#include <stdio.h>

/*
    키보드로 실수 3개를 입력한 수 큰숫자부터 작은 숫자로 정렬한 뒤 출력하는 프로그램을 작성
    다음 코드와 출력 결과를 참고해 Line_up 함수 작성하시오.
    Line_up 함수에는 이미 정의된 Swap 함수를 호출해 구현하시오.
*/

void swap(double *pa, double *pb);
void line_up(double *p, int N);

int main(void) {

    int N = 5;
    double ary[N];
    double *p = ary;
    printf("실수값 %d개 입력 : ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &p+i);
    }
    for (int i = 0; i < N; i++) {
        line_up(p, N);
    }
    printf("정렬된 값 출력 : ");
    for (int i = 0; i < N; i++) {
        printf("%.lf, ", p);
    }
    printf("\n");

    return 0;
}
void swap(double *pa, double *pb) {
    double temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}   

void line_up(double *p, int N) {
    for (int i=0;i<N-1;i++) {
        swap(&p, &p+1);
    }
}