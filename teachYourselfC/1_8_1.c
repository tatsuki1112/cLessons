#include <stdio.h>

int get_sqr(void);

int main(void)
{
    int sqr;
    sqr = get_sqr();
    printf("2乗値: %d\n", sqr);

    return 0;
}

int get_sqr(void)
{
    int num;
    printf("数値を入力してください: ");
    scanf("%d", &num);
    return num * num;
}
