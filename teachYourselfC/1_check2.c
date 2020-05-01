/*オンスをカップに変換する。カップ1杯=8オンス(237cc)*/
#include <stdio.h>

double o_to_c(int ounce);

int main(void)
{
    int ounce;
    double cup;
    printf("変換したいのは何オンスですか？: ");
    scanf("%d", &ounce);
    cup = o_to_c(ounce);
    printf("%dオンスは%.2fカップ\n", ounce, cup);

    return 0;
}

double o_to_c(int ounce)
{
    double rate = 8.0;
    //printf("%lf\n", ounce/rate);
    return ounce/rate;
}