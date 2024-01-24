#include <stdio.h>

void decompose(double x, long *, double *);

int main(void) {
  double d;
  printf("Enter a floating-point number: ");
  scanf("%lf", &d);
  long int_part;
  double frac_part;
  decompose(d, &int_part, &frac_part);
  printf("Int: %ld, frac: %g\n", int_part, frac_part);
}

void decompose(double x, long *int_part, double *frac_part) {
  *int_part = (long)x;
  *frac_part = x - *int_part;
}