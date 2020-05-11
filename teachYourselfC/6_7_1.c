#include <stdio.h>

void myputs(char *p);

int main(void)
{
    myputs("これはテストです");

    return 0;
}

void myputs(char *p)
{
    while(*p) {
        printf("%c", *p);
        p++;
    }
    printf("\n");
}