#include <stdio.h>

int main(void) {
    int age;
    char name[20];

    printf("나이 입력 : ");
    scanf("%d", &age);

    printf("나이 입력 : ");
    gets(name);
    printf("나이 : %d, 이름 : %s\n", age, name);

    return 0;
}
/*
결과
나이 입력 : 17
나이 입력 : 나이 : 17, 이름 :
*/