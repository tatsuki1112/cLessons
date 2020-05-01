/*入力された米国ドルを英国ポンドに換算するプログラム
レートは1ポンド=2ドル*/
#include <stdio.h>

int convert(int doller);

int main(void)
{
    int pound, doller;
    printf("米国ドルを入力してください: ");
    scanf("%d", &doller);
    pound = convert(doller);
    printf("%dドルは%dポンド\n", doller, pound);

    return 0;
}

int convert(int doller)
{
    int rate;
    rate = 2;
    return doller*rate;
}
