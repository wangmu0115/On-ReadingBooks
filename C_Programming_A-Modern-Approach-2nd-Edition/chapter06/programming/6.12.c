#include <stdio.h>

int main(void) {
  double E;
  double e = 1.0;
  int factorial = 1;
  printf("Enter a E: ");
  scanf("%lf", &E);
  for (int n = 1;; n++) {
    factorial *= n;
    double item = 1.0 / factorial;
    if (item < E) {
      printf("n = %d\n", n);
      break;
    } else {
      e += item;
    }
  }
  printf("e ≈ %.20lf\n", e);
}