// 验证scanf() 读取数字的方式
#include <stdio.h>
int main(void)
{
    int number;
    char str;

    printf("Enter your lucky number.\n");
    scanf("%d", &number);
    scanf("%c", &str);
    printf("Your lucky nnumber is %d\n", number);
    printf("charactor is %c\n", str);

    return 0;
}
