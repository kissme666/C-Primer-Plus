//practices7.c -- 按格式打印smile
#include <stdio.h>
void smile(void);
int main(void)
{
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");

    return 0;
}

void smile(void)
{
    printf("smile!");
}
