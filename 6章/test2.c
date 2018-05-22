/*
  関数を使ってみる
  関数を作って、int型の整数値を返してみる
*/

#include <stdio.h>

int fake_printf() {
  return 5;
}

int main() {
  int var;

  var = fake_printf();

  printf("%d\n", var);
  
  return 0;
}
