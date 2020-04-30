#include <stdio.h>
void oddOrEven(int num);

int main(void)
{
    int num;
    printf("数を入力してください: ");
    scanf("%d", &num);
    oddOrEven(num);
}

void oddOrEven(int num)
{
    if(num%2 == 0) {
        printf("偶数\n");
    } else {
        printf("奇数\n");
    }
}