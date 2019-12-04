#include<stdio.h>

int main(void){

  int i = 0;
  //入力された文字を代入する配列
  //よくわからんが多いほうがいいから俺は1000確保するぜ!
  char moji[1000];
  //scanfで読み取り
  scanf("%s", moji);
  //moji配列の分だけ、入力された文字のASCIIコードをスペース区切りで出力します
  while(moji[i]) {
    printf("%d ", moji[i++]);
    printf(" ");
  }
  printf("\n");

  return 0;
}

