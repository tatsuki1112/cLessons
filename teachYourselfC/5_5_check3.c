#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

int main(void)
{
    int input[20], i, j, counter, mode, oldMode, oldCounter;
    for(i=0;i<20;i++) {
        printf("数値を入力してください: ");
        scanf("%d", &input[i]);
    }

    oldCounter = 0;
    for(i=0;i<20;i++) {
        counter = 1;
        mode = input[i];
        for(j=0;j<20;j++) {
            if(input[j] == mode) {
                counter++;
            }

            if(counter > oldCounter) {
                oldMode = mode;
                oldCounter = counter;
            }
        }
    }

    printf("モードは %d です\n", oldMode);

    return 0;
    
}