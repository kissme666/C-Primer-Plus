// cypher1.c -- 更该输入，空格不变
#include <stdio.h>
#define SPACE ' ' 
int main(void)
{
    char ch;

    ch = getchar();
    while (ch != '\n')      // 当一行未结束的时候
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();     // 获取下一个字符
    }
    putchar(ch);             // 打印换行符

    return 0;
}
