#include <stdio.h>

int main(void) {
  int num1, num2;
  printf("Enter two integers: ");
  scanf("%d%d", &num1, &num2);
  int divisor = 1;
  for (int i = 1; i <= (num1 > num2 ? num2 : num1); i++) {
    if (num1 % i == 0 && num2 % i == 0) {
      divisor = i;
    }
  }
  printf("Greatest common divisor: %d\n", divisor);
  return 0;
}