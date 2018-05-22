#include <stdio.h>

void fake_printf() {
  printf("%d\n", 5);
}

int main() {
  fake_printf();

  return 0;
}
