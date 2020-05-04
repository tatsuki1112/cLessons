#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char command[80], temp[80];
    int i, j;

    for( ; ; ) {
        printf("計算(add, subtract, divide, multiply)しますか？\nそれともやめますか(quiet)?: ");
        fgets(command, 80, stdin);
        //終端を変更
        command[strlen(command)-1] = '\0';
        /*やめたいかどうか確認する*/
        if(!strcmp(command, "quiet"))
            break;
        
        printf("1番目の数字を入力してください: ");
        fgets(temp, 80, stdin);
        temp[strlen(temp)-1] = '\0';
        i = atoi(temp);

        printf("2番目の数字を入力してください: ");
        fgets(temp, 80, stdin);
        temp[strlen(temp)-1] = '\0';
        j = atoi(temp);

        //ここで計算をする
        if(!strcmp(command, "add"))
            printf("%d\n", i+j);
        else if(!strcmp(command, "subtract"))
            printf("%d\n", i-j);
        else if(!strcmp(command, "divide")) {
            if(j)
                printf("%d\n", i/j);
        }
        else if(!strcmp(command, "multiply"))
            printf("%d\n", i*j);
        else
            printf("不明なコマンドです\n");
    }

    return 0;
}