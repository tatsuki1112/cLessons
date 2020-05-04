#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[100];
    int i;
    printf("文字列を入力してください: ");
    fgets(input, 100, stdin);
    input[strlen(input)-1] = '\0';

    for(i=strlen(input)+1; i>=0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}