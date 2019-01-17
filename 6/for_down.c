// for_down.c -- 递减运算符来递计数器
#include <stdio.h>
int main(void)
{
    int secs;

    for (secs = 5; secs > 0; secs--)
        printf("%d seconds\n", secs);
    
    printf("Done!\n");

    return 0;
}
