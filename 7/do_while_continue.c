#include <stdio.h>
int main(void)
{
    int a = 0;

    do 
    {
        if (a == 2)
            continue;
        printf("number = %d\n", a);
        a++;
    }while(a < 10);         // continue 会跳到这里来
    printf("Done!\n");

    return 0;
}

