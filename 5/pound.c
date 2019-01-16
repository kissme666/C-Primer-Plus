// pound.c --  定义一个带一个参数的函数
#include <stdio.h>
void pound(int n );     // 声明函数原型
int main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0f;

    pound(times);
    pound(ch);
    pound(f);
    
    return 0;
}

void pound(int n)       // 表明该函数接受一个 int 类型的参数
{
    while (n-- > 0)   
        printf("#");
    printf("\n");
}
