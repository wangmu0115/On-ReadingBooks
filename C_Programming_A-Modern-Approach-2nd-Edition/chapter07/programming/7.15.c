#include <stdio.h>

short int factorial_short(short int n) {
  short int factorial = 1;
  for (short int i = 1; i <= n; i++) {
    factorial *= i;
  }
  return factorial;
}

int main(void) {
  short int n;
  printf("Enter a positive integet: ");
  scanf("%hd", &n);
  printf("Factorial of %hd: %hd\n", n, factorial_short(n));
  return 0;
}
