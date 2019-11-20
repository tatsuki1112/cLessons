#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(void){

  char num[]="72 69 76 76 79 87 79 82 76 68";
  char sep[] = " "; 
  char *tok;
  int numint;
  tok = strtok( num, sep );
  while( tok != NULL ){
   numint = atoi(tok);
  // printf("%d\n", numint);
   printf("%c", numint);
   // printf( "%s\n", tok );
    tok = strtok( NULL, sep );  
  }
  printf("\n");

  return 0;
}

