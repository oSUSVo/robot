#include <stdio.h>
int num(int count, int sum);  // 함수 선언

int main(void) {
    int val = num(1, 0);        // 함수 호출
    printf("%d\n", val);
    return 0;
}

int num(int count, int sum)        // 재귀호출 함수 정의
{
    if (count == 11) return sum;
    sum += count;
    num(count+1, sum);
}

// #include <stdio.h>
// int num(int count;  // 함수 선언
// int sum;

// int main(void) {
//     int val = num(1);        // 함수 호출
//     printf("%d\n", val);
//     return 0;
// }

// int num(int count)        // 재귀호출 함수 정의
// {
//     if (count > 10) return sum;
//     sum += count;
//     num(count+1);
// }


/*
    결과
    55
*/