#include <stdio.h>

void add_num(int num);
int total = 0;

int main(void) {
    add_num(1);
    printf("%d\n", total);

    return 0;
}

void add_num(int num) {
    if (num > 10) return;
    total += num;
    add_num(num + 1);
}

/*
    결과
    55
*/