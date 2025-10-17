#include <stdio.h>  // 표준 입출력 헤더파일 (printf, scanf 사용을 위해 필요)

int main(void)  // 프로그램이 시작되는 함수 (main 함수)
{
    // switch ~ case 문
    int rank = 2, m = 0;
    
    switch (rank)   // rank 값에 따라 동작
    {           
        case 1:     // rank가 1인 경우        
            m = 300;    
            break;      
        case 2:     // rank가 2인 경우
            m = 200;
            break;
        case 3:     // rank가 3인 경우
            m = 100;
            break;
        default:    // rank와 일치하는 case값이 경우
            m = 10;
            break;  
    }               // break가 없는 경우 처음부터 끝까지 실행

    printf("m : %d\n", m);

    return 0;
}
/*
    b : 2
*/