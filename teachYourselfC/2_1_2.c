#include <stdio.h>

int main(void)
{
    float num;
    int choice;
    printf("数値を入力してください: ");
    scanf("%f", &num);
    printf("1:フィートからメートルへ、2:メートルからフィートへ\n");
    printf("選択してください: ");
    scanf("%d", &choice);

    if(choice == 1) 
        printf("%.2f\n", num/3.28);
    
    if(choice == 2)
        printf("%.2f\n", num*3.28);
    
    return 0;
}