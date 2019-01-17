// suming.c -- 根据用户输入的整数求和
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;      // 把sum初始化为0
    _Bool input_is_good;

    printf("Please enter an interger  to be summd ");
    printf("(q to quit): ");
    input_is_good  = (scanf("%ld", &num) == 1);
    while (input_is_good)
    {
        sum =sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}


