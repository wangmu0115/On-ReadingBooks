#include <stdio.h>

int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main(void) {
  int n;
  double e = 1.0;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    e += 1.0 / factorial(i);
  }
  printf("e ≈ %.6lf\n", e);
}