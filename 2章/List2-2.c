/*
  読み込んだ整数値のもっとも下のけたの数字を表示
*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください。");
  scanf("%d", &no);

  printf("もっとも下のけたは%dです。\n", no % 10);

  return 0;
}
