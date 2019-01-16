// addemup.c -- 几种常见的语句
#include <stdio.h>
int main(void)              // 计算 0-20 的和
{
    int count, sum;         // 声明语句
            
    count = 0;              // 表达式语句
    sum  = 0;   
    while (count++ < 20)    // 迭代语句
    {
        sum = sum + count;  // 表达式语句
    }
    printf("sum = %d\n", sum);  
    
    return 0;               // 跳转语句
}
