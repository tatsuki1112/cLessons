#include<stdio.h>
#include<string.h>

int main(void){
 // int i = 0;
  char  num[1000];
  char* p;
  int i;
  fgets(num,  1000, stdin);
 
 // printf("%d\n", num);
  printf("%s\n", num);
  //p = num;
  //printf("%c\n",p[2]);
  i = 0;
  while(i<1000){

     p = strtok(num, " ");
     printf("%s\n", p);
     i++;
  }
  return 0;
}
