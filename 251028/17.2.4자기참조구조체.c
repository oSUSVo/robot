#include <stdio.h>

struct list
{
    int num;
    struct list *next;
};

int main(void) {
    struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
    struct list *head = &a, *current;

    a.next = &b;
    b.next = &c;

    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);

    printf("list all : ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->num);
        current = current->next;
    }
    printf("\n");

    return 0;    
}


/*
출력
 홍길동   23       111-1111    울릉도 독도
 이순신   35       222-2222    서울 건천동
 장보고   19       333-3333    완도 청해진
 유관순   15       444-4444       충남 천안
 안중근   45       555-5555    황해도 해주
*/