#include <stdio.h>

int main(void) {
    int ary[5];

    printf("ary의 값 : %u\t", ary);     // 주소로서의 배열명의 값
    printf("ary의 주소 : %u\n", &ary);  // 배열의 주소
    printf("ary + 1 : %u\t", ary + 1);
    printf("&ary + 1 : %u\n", &ary + 1);
    
    return 0;
}

/*
결과
ary의 값 : 4294958480   ary의 주소 : 4294958480
ary + 1 : 4294958484    &ary + 1 : 4294958500

ary의 값 = (ary + 1) + 4
    // 
ary의 주소 = (&ary + 1) + 20
    // &ary + 1은 배열 전체값을 가지고 + 1을 한다
*/