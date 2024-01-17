#include <stdio.h>

int main(void) {
  int num;
  printf("Enter a nonnegative interger: ");
  scanf("%d", &num);
  int digit = 0;
  do {
    digit++;
    num /= 10;
  } while (num > 0);
  printf("The number has %d digit(s).\n", digit);
  return 0;
}