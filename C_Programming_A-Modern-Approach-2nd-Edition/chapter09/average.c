#include <stdio.h>

double average(double x, double y) { return (x + y) / 2; }

int main(void) {
  double a, b, c;
  printf("Enter three numbers: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  printf("Average of %g and %g: %g\n", a, b, average(a, b));
  printf("Average of %g and %g: %g\n", b, c, average(b, c));
  printf("Average of %g and %g: %glf\n", a, c, average(a, c));
  return 0;
}