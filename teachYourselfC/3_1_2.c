#include <stdio.h>

int main(void)
{
    int a, b;
    char ch;

    printf("実行したい演算は\n加算(A), 減算(S), 乗算(M), 除算(D)のどれですか\nアルファベットの一文字を入力してください: ");
    ch = getchar();
    printf("\n");

    printf("最初の数字を入力してください: ");
    scanf("%d", &a);
    printf("二番目の数字を入力してください: ");
    scanf("%d", &b);

    switch (ch)
    {
        case 'A':
            printf("%d\n", a+b);
            break;
        case 'S':
            printf("%d\n", a-b);
            break;
        case 'M':
            printf("%d\n", a*b);
            break;
        case 'D':
            if(b != 0)
                printf("%d\n", a/b);
            break;
    
        default:
            printf("計算不能\n");
            break;
    }
}
