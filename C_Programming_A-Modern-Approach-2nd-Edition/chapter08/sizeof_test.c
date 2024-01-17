#include <stdio.h>

int main(void) {
  int a[10];
  printf("%zu\n", sizeof(a));
  printf("%lu\n", sizeof(a) / sizeof(a[0]));
}