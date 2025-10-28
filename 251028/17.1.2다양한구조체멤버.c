#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
    char name[20];
    int age;
    double height;
    char *intro;
};

int main(void) {
    struct profile yuni;

    strcpy(yuni.name, "서하윤");
    yuni.age = 17;
    yuni.height = 164.5;

    yuni.intro = (char *)malloc(80);
    printf("자기소개 : ");
    gets(yuni.intro);
    printf("이름 : %s\n", yuni.name);
    printf("나이 : %d\n", yuni.age);
    printf("키 : %.1lf\n", yuni.height);
    printf("자기소개 : %s\n", yuni.intro);
    free(yuni.intro);
    
    return 0;    
}
/*
입력
자기소개 : 항상 행복하세요.

출력
이름 : 서하윤
나이 : 17
키 : 164.5
자기소개 : 항상 행복하세요.
*/