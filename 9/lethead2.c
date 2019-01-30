// lethead2.c -- 使用函数来打印 * 号修改版
#include  <stdio.h>
#include  <string.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "mEGAPOLIS, CA 94904"
#define WIDTH 40 
#define SPACE ' ' 

void show_n_char(char ch, int num);        // 函数原型

int main(void)
{
    int spaces;

    show_n_char('*', WIDTH);
    putchar('\n');
    // 打印第二行信息
    show_n_char(SPACE, 12);  // 计算空格数
    printf("%s\n", NAME);
    // 打印第三行信息
    spaces =  (WIDTH - strlen(ADDRESS)) / 2; 
    show_n_char(SPACE, spaces); 
    printf("%s\n", ADDRESS);
    // 打印第四行信息
    show_n_char(SPACE, (WIDTH - strlen(PLACE))/ 2);
    printf("%s\n", PLACE);
    // 打印第五行信息
    show_n_char('*', WIDTH);
    putchar('\n');
    
    return 0;
}

// 输出指定的的符号的个数
void show_n_char(char ch, int num)
{
    int count;

    for (count = 1; count <= num; count++)
        putchar(ch);
}

