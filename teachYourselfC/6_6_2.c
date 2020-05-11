#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p, **mp, str[80];

    p = str;
    mp = &p;

    printf("名前を入力してください: ");
    fgets(*mp, 80, stdin);
    str[strlen(str)-1] = '\0';
    printf("こんにちは %s さん\n", *mp);

    return 0;
}