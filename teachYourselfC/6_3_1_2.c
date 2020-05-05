#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[80], *p;

    printf("文字列を入力してください: ");
    fgets(str, 80, stdin);
    str[strlen(str)-1] = '\0';
    p = str;

    while(*p) {
        *p = toupper(*p);
        p++;
    }

    printf("%s\n", str);
    
    p = str;

    while(*p) {
        *p = tolower(*p);
        p++;
    }

    printf("%s\n", str);

    return 0;

}