#include <stdio.h>

/*
    키보드로 실수 3개를 입력한 수 큰숫자부터 작은 숫자로 정렬한 뒤 출력하는 프로그램을 작성
    다음 코드와 출력 결과를 참고해 Line_up 함수 작성하시오.
    Line_up 함수에는 이미 정의된 Swap 함수를 호출해 구현하시오.
*/

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp, int N);

int main(void) {
    double max, mid, min;

    int N = 3;
    printf("실수값 %d개 입력 : ", N);
    scanf("%lf%lf%lf", &max, &mid, &min);
    line_up(&max, &mid, &min, N);
    printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

    return 0;
}
void swap(double *pa, double *pb) {
    double temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}   

void line_up(double *maxp, double *midp, double *minp, int N) {
    for (int i=0;i<N-1;i++){
        if (*maxp < *midp) {
            swap(maxp, midp);
        }
        if (*midp < *minp) {
            swap(midp, minp);
        }
    }
}