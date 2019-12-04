#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(void){

  char num[1000];
  char sep[] = " "; 
  char *tok;
  int ch;
  fgets(num, 1000, stdin);
  tok = strtok( num, sep );
  while( tok != NULL ){
   ch = atoi(tok);
  // printf("%d\n", numint);
   printf("%c", ch);
   // printf( "%s\n", tok );
    tok = strtok( NULL, sep );  
  }
  printf("\n");

  return 0;
}

