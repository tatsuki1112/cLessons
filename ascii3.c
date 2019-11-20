#include<stdio.h>

int main(void){
  int i=0;
  char moji[1000];
  scanf("%s", moji);
  while(moji[i]){

    printf("%d ", moji[i++]);
  }
  printf("\n");
  return 0;
}

