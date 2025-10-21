#include <stdio.h>
void fruit(int count);  // 함수 선언

int main(void) {
    fruit(1);        // 함수 호출

    return 0;
}

void fruit(int count)        // 재귀호출 함수 정의
{
    printf("apple\n");
    if (count == 3) return;
    fruit(count + 1);            // 자신을 다시 호출
    printf("jam\n");
}


/*
    결과
    apple
    apple
    apple
    jam
    jam
*/