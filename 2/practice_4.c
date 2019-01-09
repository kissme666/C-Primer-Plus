// practices_4.c -- main() 里面调用2个函数打印信息
#include <stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow\n");
}

void deny(void)
{
    printf("Which nobody can deny\n");

}
