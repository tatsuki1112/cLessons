#include <stdio.h>
#include <string.h>

char *p[][2] = {
    {"レッドデリシャス", "赤"},
    {"ゴールデンデリシャス", "黄色"},
    {"ワインサップ", "赤"},
    {"ガラ", "赤みのオレンジ色"},
    {"ロディ", "緑"},
    {"ムツ", "黄色"},
    {"コートランド", "赤"},
    {"ジョナサン", "赤"},
    {"", ""}

};

int main(void)
{
    int i;
    char apple[80];

    printf("リンゴの名前を入力してください: ");
    fgets(apple, 80, stdin);
    apple[strlen(apple)-1] = '\0';

    for (i=0; *p[i][10]; i++) {
        if (!strcmp(apple, p[i][0])) {
            printf("%s は %s です\n", apple, p[i][1]);
        }
    }

    return 0;
}