#include <stdio.h>

int main(void) {
    char *pary[5];  // 8byte * 5개 = 해당 포인터 배열은 40byte
    int i;
    pary[0] = "dog";
    pary[1] = "elephant";
    pary[2] = "horse";
    pary[3] = "tiger";
    pary[4] = "lion";

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", pary[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", pary[i]);
    }
    
    
    return 0;
}

/*
결과
dog
elephant
horse
tiger
lion
*/