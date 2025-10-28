#include <stdio.h>

int main(void) {
    int a = 10, b = 20;
    int *pa = &a, *pb = &b;
    int **ppa = &pa, **ppb = &pb;
    int *pt;

    printf("a\tb\t*pa\t*pb\t**ppa\t**ppb\t*pt\n");
    printf("%d\t%d\t%d\t%d\t%d\t%d\t\n", a, b, *pa, *pb, **ppa, **ppb);
    pt = *ppa;
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", a, b, *pa, *pb, **ppa, **ppb, *pt);
    
    *ppa = *ppb;
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", a, b, *pa, *pb, **ppa, **ppb, *pt);
    
    *ppb = pt;
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", a, b, *pa, *pb, **ppa, **ppb, *pt);

    return 0;
}