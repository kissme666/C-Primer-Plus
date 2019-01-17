// for_show.c -- 第一个表达式不一定非得赋值
#include <stdio.h>
int main(void)
{
    int num = 0;

    for (printf("Keep entering numbers!\n"); num !=6;)
        scanf("%d", &num);

    return 0;
}
