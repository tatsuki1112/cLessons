#include <stdio.h>
#include <string.h>

char words[][2][40] = {
    {"dog", "Hund"},
    {"no", "nein"},
    {"year", "Jahr"},
    {"child", "Kind"},
    {"I", "Ich"},
    {"drive", "fahren"},
    {"house", "Haus"},
    {"to", "zu"},
    {"",""}
};

int main(void)
{
    char english[80];
    int i;

    printf("英語の単語を入力してください: ");
    fgets(english, 80, stdin);
    english[strlen(english)-1] = '\0';

    i = 0;
    while(strcmp(words[i][0], "")) {
        if(!strcmp(english, words[i][0])) {
            printf("ドイツ語の訳語: %s\n", words[i][1]);
            break;
        }
        i++;
    }
    if(!strcmp(words[i][0], "")) {
        printf("辞書に登録がありません\n");
    }

    return 0;
}