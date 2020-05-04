#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[10][80];
    int i;

    for(i=0;i<10;i++) {
        printf("%d: ", i+1);
        fgets(text[i], 80, stdin);
        text[i][strlen(text[i])-1] = '\n';
    }

    do {
        printf("文字列の番号(1-10)を入力してください(0で終了): ");
        scanf("%d", &i);
        i--;
        if((i>=0) && (i<10)) {
            printf("%s\n", text[i]);
        }
    } while(i>=0);

    return 0;
}