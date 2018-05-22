/*
  実数値を読み込んでその実数で表示
*/

#include <stdio.h>

int main(void) {
  double x;

  printf("数字を入力してください。");
  printf("x:"); scanf("%lf", &x);

  printf("x:%f\n", x);

  return 0;
}
