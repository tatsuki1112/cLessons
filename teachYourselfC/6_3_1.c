#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[100];
    int i;

    printf("文字列を入力してください: ");
    fgets(str, 80, stdin);
    str[strlen(str)-1] = '\0';

    for(i=0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }

    printf("%s\n", str);

    for(i=0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    printf("%s\n", str);
}