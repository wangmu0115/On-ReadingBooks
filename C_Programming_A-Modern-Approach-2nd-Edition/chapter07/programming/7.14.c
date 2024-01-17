#include <math.h>
#include <stdio.h>

double square_root(double x, double precision) {
  double y = 1.0;
  double new_y = (x / y + y) / 2;
  while (fabs(y - new_y) >= precision * y) {
    y = new_y;
    new_y = (x / y + y) / 2;
  }
  return y;
}

int main(void) {
  double x;
  printf("Enter a positive number: ");
  scanf("%lf", &x);
  printf("Square root: %lf\n", square_root(x, 0.00001));
  return 0;
}