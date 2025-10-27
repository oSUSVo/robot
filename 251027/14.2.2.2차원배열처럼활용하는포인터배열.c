#include <stdio.h>

int main(void) {
    int ary1[4] = {1, 2, 3, 4};
    int ary2[4] = {11, 12, 13, 14};
    int ary3[4] = {21, 22, 23, 24};
    int *pary[3] = {ary1, ary2, ary3};
    int i, j;

    for (i = 0; i < 3; i++)     // 3행 반복
    {
        for (j = 0; j < 4; j++) // 4열 반복
        {
            printf("%5d", pary[i][j]);   // 2차원 배열처럼 출력
        }
        printf("\n"); // 한 행을 출력한 후에 줄 바꿈
    }
    
    return 0;
}

/*
결과
    1    2    3    4
   11   12   13   14
   21   22   23   24
*/