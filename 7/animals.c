// animals.c -- 使用 switch 语句 
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give "
            "an animal name\n begining with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        if (islower(ch))    // 只接受小写字母
            switch (ch)
            {
                case 'a':
                    printf("argali, a wild sheep of Asian\n");
                    break;
                case 'b':
                    printf("babirusa, a wild pig of malay\n");
                    break;
                case 'c':
                    printf("coati, racoonlike manmmal\n");
                    break;
                case 'd':
                    printf("desman, aquatic, molelike critter\n");
                    break;
                default:
                    printf("That is a stumper!\n");
                    /* switch 结束 */

            }
        else
            printf("I recognize only lowercase letters.\n");
        while (getchar() != '\n')
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");
   
   return 0; 
}   


