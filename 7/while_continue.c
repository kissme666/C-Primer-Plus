#include <stdio.h>
int main(void)
{
    int a = 0;

    while (a <= 10)
    {
        if (a == 2)
            continue;
        printf("number = %d\n", a);
        a++;
    }
    printf("Done.\n");

    return 0;
}
