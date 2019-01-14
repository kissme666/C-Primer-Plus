// input.c -- 何时使用 &
#include <stdio.h>
int main(void)
{
    int age;
    float assets;
    char pet[30];  // 字符串数组

    printf("Enter your age, assets, and favorite pet.\n");
    // 使用scanf() 读取基本变量类型的值 在变量名前面加 &
    scanf("%d %f", &age, &assets);
    // 使用scanf() 把字符串读入字符数组中，不要使用 &
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}
