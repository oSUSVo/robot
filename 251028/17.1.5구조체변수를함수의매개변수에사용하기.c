#include <stdio.h>

struct vision
{
    double left;
    double right;
};

struct vision exchange (struct vision robot);

int main(void) {
    struct vision robot;

    printf("시력 입력 : ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);
    printf("바뀐 시력 : %.1lf  %.1lf\n", robot.left, robot.right);
    return 0;    
}

struct vision exchange(struct vision robot) {
    double temp;
    
    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
};

/*
출력
시력 입력 : 15.5 20.0
바뀐 시력 : 20.0  15.5
*/