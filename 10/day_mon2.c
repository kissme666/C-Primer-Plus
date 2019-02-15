/*
* day_mon1.c -- 打印每个月的天数 
* 暂不考虑闰年
*/
#include <stdio.h>

int main(void)
{
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof days / sizeof days[0]; index++)      /* sizeof day / sizeof days[0] 这个是计算数组的个数 */
        printf("Months %2d has %2d days.\n", index + 1, days[index]);
    
    return 0;
}
