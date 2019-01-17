// for_cube.c -- 使用 for 循环创建一个立方表
#include <stdio.h>
int main(void)
{
    int num;

    printf("    n    n cubed\n");
    // 限制立方的大小
    for (num = 1; num*num*num <= 216; num++)
        printf("%5d %5d\n", num, num*num*num);

    return 0;

}
