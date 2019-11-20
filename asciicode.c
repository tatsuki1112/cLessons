#include<stdio.h>

int main(void){
  char c, C;
  int offset;
  C = 'D';
  offset = 'a' - 'A';   //大文字と小文字のASCIIコードの差
  c = C + offset;       //大文字を小文字に変換，小文字をcに格納
  printf("c=%d\noffset=%d\nC=%d\n", c, offset, C);
  return 0;
}
