/* longstrg.c -- 打印较长的字符串 */
#include <stdio.h>
int main(void)
{   
    /* 第一种打印长字符串的方法 */
    printf("Here's one way to print a ");
    printf("long string.\n");
    /* 第二种打印长字符串的方法 但是第二行必须开头写*/
    printf("Here's another way to print a \
long string.\n");
    /* ANSI C 字符串连接方法 */
    printf("Here's the newest way to print a "
            "long string.\n"); // ANSI C

    return 0;
}
