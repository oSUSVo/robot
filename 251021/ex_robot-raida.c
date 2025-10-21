#include <stdio.h>
#include <math.h>
#include <string.h>

double main(void) {
    double meter, radian[36];
    int i, j;
    
    for (i = 0; i < 36; i++)
    {
        printf("%d ~ %d 각도에서 탐지된 물체의 거리를 입력하세요 : ", 10 * i + 1, 10 * i + 10);
        if(scanf("%lf", &radian[i]) != 1) return 1;
    }
    // for (i = 0; i < 36; i++)
    // {
    //     printf("%d ~ %d 각도 값 : %.lf\n", 10 * i + 1, 10 * i + 10, radian[i]);
    // }
    for (i = 0; i < 35; i++)
    {
        for (j = i + 1; j < 35; j++)
        {
            if (radian[i] < 0) return 1;
            if (radian[i] > radian[j]);
            {
                radian[j] = -1;
            }
            radian[i] = -1;
        }
    }

    printf("==인식결과");
    for (i = 0; i < 35; i++)
    {
        if (radian[i] > 0)
        {
            printf("%d ~ %d 각도 값 : %.lf\n", 10 * i + 1, 10 * i + 10, radian[i]);
        }
    }

    // 1. 값 받기
    // 2. 값 비교
    // 3. 
    // 4. 출력

    return 0;
}