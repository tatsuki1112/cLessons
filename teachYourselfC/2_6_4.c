#include <stdio.h>

int main(void)
{
    int counter, till;
    printf("カウントダウン: ");
    scanf("%d", &till);
    for(counter=till; counter >= 0; counter--) {
        printf("%d\n", counter);
    }
    printf("\a\n");

    return 0;
}