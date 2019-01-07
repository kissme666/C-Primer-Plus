#include <stdio.h>
int main(void)
{
    float weight;
    float value;


    printf("Are you worth your weight ini platinum?\n");
    printf("Let's check it out.\n");
    printf("please enter your weight in pounds: ");


    scanf("%f", &weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%2.f.\n", value);
    printf("You are easily worth that! If platinum prices drop.\n");
    printf("eat more to maintain your value.\n");


    return 0;

}

