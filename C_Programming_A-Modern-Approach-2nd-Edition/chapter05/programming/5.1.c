#include <stdio.h>

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  int digits = 0;
  if (number < 10) {
    digits = 1;
  } else if (number < 100) {
    digits = 2;
  } else if (number < 1000) {
    digits = 3;
  } else if (number < 10000) {
    digits = 4;
  }
  printf("The number %d has %d digits.\n", number, digits);

  return 0;
}