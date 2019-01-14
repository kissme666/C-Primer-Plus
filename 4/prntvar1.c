/* prntval1.c -- printf() 返回值 */
#include <stdio.h>
int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F water's bolling point.\n", bph2o);
    printf("printf() funcation  printed %d characters.\n", rv);

    return 0;
}
