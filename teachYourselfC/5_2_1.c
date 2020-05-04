#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80], str2[80];
    int i;

    printf("第一の文字列を入力してください: ");
    fgets(str1, 80, stdin);
    printf("第二の文字列を入力してください: ");
    fgets(str2, 80, stdin);
    
    //printf("%c", str1[strlen(str1)-1]);
    /*gets()が使えないのでfgets()を利用する、終端文字の改行のみ'\0'に置換*/
    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';
    
    /*文字列の長さを確認*/
    printf("%s は %ld 文字の長さです\n", str1, strlen(str1));
    printf("%s は %ld 文字の長さです\n", str2, strlen(str2));

    /*文字列を比較する*/
    i = strcmp(str1, str2);
    if(!i)
        printf("文字列は等しい\n");
    else if(i<0)
        printf("%s は %s　より小さい\n", str1, str2);
    else 
        printf("%s は %s　より小さい\n", str2, str1);

    /*十分なスペースがあれば、str2をstr1の最後に追加する*/
    if(strlen(str1)+strlen(str2) < 80) {
        strcat(str1, str2);
        printf("%s\n", str1);
    }

    /*str2をstr1にコピーする*/
    strcpy(str1, str2);
    printf("%s %s\n", str1, str2);

    

    return 0; 
}