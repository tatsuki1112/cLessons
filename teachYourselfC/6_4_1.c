#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p = "stop";
    char str[80];

    do {
        printf("文字列を入力してください");
        fgets(str, 80, stdin);
        str[strlen(str)-1] = '\0';
    } while (strcmp(p, str));

    return 0;
}