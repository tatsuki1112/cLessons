#include <stdio.h>

int main(void)
{
    int num;
    for(num = 0;num <= 10;num++) {
        printf("%d %d %d\n", num, num*num, num*num*num);
    }

    return 0;
}