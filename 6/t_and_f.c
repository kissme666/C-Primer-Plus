// t_and_f.c -- C 中的真和假
#include <stdio.h>
int main(void)
{
    int true_val, false_val;

    true_val = (10 > 2);
    false_val = (10 == 2);
    printf("true = %d; fales = %d\n", true_val, false_val);

    return 0;
}
