#include <stdio.h>
int main(void)
{
    int a = 0;

    for (; a < 10; a++) // continue 会跳到第三个表达式，然后再去判断第二个表达式的值
    {
        if (a == 2)
            continue;
        printf("number = %d\n", a);
    }
    printf("Done.\n");

    return 0;
}
