#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[100], bigstr[100];
    
    while(1) {
        printf("文字を入力してください(終了:quiet):");
        fgets(input, 100, stdin);
        input[strlen(input)-1] = '\0';
        if((!strcmp(input, "quiet")) || strlen(bigstr)+strlen(input)+1 > 100) {
            break;
        }
        input[strlen(input)] = '\n';
        strcat(bigstr, input);
        printf("%s", bigstr);
    }

    return 0;
}