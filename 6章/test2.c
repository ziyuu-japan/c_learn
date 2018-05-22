#include <stdio.h>

int fake_printf() {
  printf("%d\n", 5);

  return 5;
}

int main() {
  int var;

  var = fake_printf();

  printf("%d\n", var);
  
  return 0;
}
