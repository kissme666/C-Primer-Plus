// usehotel.c -- 房间费率程序
// 与程序 9.10 一起编译
#include <stdio.h>
#include "hotel.h"          // 声明符号常量，声明函数
int main(void)
{
    int nights;
    double hotel_rate;
    int code;

    while ((code  = menu()) != QUIT)
    {
        switch (code)
        {
            case 1:
                hotel_rate = HOTEL1;
                braek;
            case 2:
                hotel_rate = HOTEL2;
                braek;
                
            case 3: 
                hotel_rate = HOTEL3;
                braek;
            case 4:
                hotel_rate = HOTEL4;
                break;
            case 5:
                hotel_rate = HOTEL5;
                break;
            default: 
                hotel_rate = 0.0;
                printf("0ops!\n");
                 break;
        }
        nights = getnights();
        showprice(hotel_rate, nights);

    }
    printf("Thank you and goodbye.\m");

    return 0;
}   

