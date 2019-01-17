// for_char.c 使用字符来代替数字技术
#include <stdio.h>
int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        // 因为 char 类型其实是整数类型
        printf("The ASCII value for %c is %d\n", ch, ch);

    return 0;
}
