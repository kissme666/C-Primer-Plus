#include <stdio.h>
#define MONTHS 12

int main(void){
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++){
        // 注意 days 这里指的是数组days的第一个值的地址
        printf("Month %2d has %d days.\n", index + 1, *(days + index));
    }
    printf("days's values is %p\n", days);
    
    return 0;
}
