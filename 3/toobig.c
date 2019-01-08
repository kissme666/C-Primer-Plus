#include <stdio.h>
/*toobig.c --超出系统允许的最大int值*/
int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d\n", i, i+1, i+2);
    printf("%d %d %d\n", j, j+1, j+2);

    return 0;
}
