/*
  関数を使ってみる
  関数を作って、int型の引数をとって、10倍した値を返す
*/

#include <stdio.h>

int fake_printf(int x) {
  return x * 10;
}

int main() {
  int var;

  var = fake_printf(5);

  printf("%d\n", var);
  
  return 0;
}
