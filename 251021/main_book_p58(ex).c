#include <stdio.h>

// define에는 소문자를 사용해도 되지만 추천하지 않는다
// 
#define EARNED_INCOME_TAX_RATE 4
#define LOCAL_INCOME_TAX_RATE 10
#define NATIONAL_PENSION_RATE 4.5
#define EMPLOYMENT_INSURANCE_RATE 0.8
#define HEALTH_INSURANCE_RATE 3.38

int main(void) {
    float salary;
    float eit, lit, np, ei, hi;
    float total;

    printf("This program calcutaltes social insurance tax \n");
    printf("Please enter yout salary(month):");
    scanf("%f", &salary);

    eit = salary * (EARNED_INCOME_TAX_RATE / 100.0);
    lit = eit * (LOCAL_INCOME_TAX_RATE / 100.0);
    np = salary * (NATIONAL_PENSION_RATE / 100.0);
    ei = salary * (EMPLOYMENT_INSURANCE_RATE / 100.0);
    hi = salary * (HEALTH_INSURANCE_RATE / 100.0);
    total = eit + lit + np + ei + hi;

    printf("\nEarned income tax: \t %10d Won\n", (int)eit);
    printf("Local income tax: \t %10d Won\n", (int)lit);
    printf("National pension: \t %10d Won\n", (int)np);
    printf("Employment insurance: \t %10d Won\n", (int)ei);
    printf("Health insurance: \t %10d Won\n", (int)hi);
    printf("----------------------------------------\n");
    printf("Total: \t\t\t %10d Won\n", (int)total);
        
    return 0;
}
/*
    변수와 함수명이 같으면 오류난다
*/