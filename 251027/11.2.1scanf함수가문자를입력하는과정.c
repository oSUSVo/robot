#include <stdio.h>

int main(void) {
    char ch;
    int i;
    
    for (i=0;i<3;i++) {
        scanf("%c", &ch);
        printf("%c", ch);
    }

    return 0;
}

/*
    실행
    tifer
    
    결과
    tig
*/