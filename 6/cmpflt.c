// cmpflt.c -- 浮点数的比较
#include <stdio.h>
#include <math.h>
int main(void)
{
    const double ANSWER = 3.14159;
    double reponse;

    printf("What is the value of pi?\n");
    scanf("%lf", &reponse);          // 注意 %lf 是 double 类型的转换说明
    while (fabs(reponse - ANSWER) > 0.0001)
    {
        printf("Try again!\n");
        scanf("%lf", &reponse);
    }
    printf("Close enough!\n");

    return 0;
}


