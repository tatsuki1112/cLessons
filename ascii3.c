#include<stdio.h>

int main(void){
  int i=0;
  char moji[1000];
  int tl = 42;
  scanf("%s", moji);
  while(moji[i]){

    printf("%c", moji[i++]+tl);
  }
  printf("\n");
  return 0;
}

