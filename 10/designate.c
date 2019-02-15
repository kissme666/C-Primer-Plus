/*
* designate.c -- 使用指定初始化器
* 暂不考虑闰年
*/
#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, 31, [4] = 31, 30, 31, [1] =29};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Months %2d has %2d days.\n", index + 1, days[index]);
    
    return 0;
}
