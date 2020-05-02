#include <stdio.h>
#include <math.h>

int main(void)
{
    double i;

    for(i=1.0; i<101.0; i++) {
        printf("%fの平方根は %f\n", i, sqrt(i));
        printf("整数部: %d", (int)sqrt(i));
        printf("少数部: %f\n", sqrt(i)-(int)sqrt(i));
        printf("\n");
    }

    return 0;
}