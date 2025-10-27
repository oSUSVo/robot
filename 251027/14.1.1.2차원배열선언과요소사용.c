#include <stdio.h>

int main(void) {
    int score[3][4];
    int total;
    double avg;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("4과목의 점수 입력 : ");
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }

    for (i = 0; i < 3; i++)     // 학생수 만큼 반복
    {
        total = 0;              // 학생이 바뀔 때마다 0으로 초기화
        for (j = 0; j < 4; j++) // 과목 수 만큼 반복
        {
            total += score[i][j]; // 학생별 총점 누적
        }
        avg = total / 4.0;      // 평균 계산
        printf("총점 : %d, 평균 : %.2lf\n", total, avg); // 총점, 평균 출력
    }

    return 0;
}
/*
결과
4과목의 점수 입력 : 72 80 95 60
4과목의 점수 입력 : 68 98 83 90
4과목의 점수 입력 : 75 72 84 90
총점 : 307, 평균 : 76.75
총점 : 339, 평균 : 84.75
총점 : 321, 평균 : 80.25
*/
