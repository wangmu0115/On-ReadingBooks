#include <stdio.h>

int main(void) {
  double salary;
  double tax;
  printf("请输入应纳税所得额: ");
  scanf("%lf", &salary);

  if (salary > 7000.0) {
    tax = 230.0 + (salary - 7000) * 0.06;
  } else if (salary > 5250.0) {
    tax = 142.5 + (salary - 5250) * 0.05;
  } else if (salary > 3750.0) {
    tax = 82.5 + (salary - 3750) * 0.04;
  } else if (salary > 2250.0) {
    tax = 37.5 + (salary - 2250) * 0.03;
  } else if (salary > 750.0) {
    tax = 7.5 + (salary - 750) * 0.02;
  } else {
    tax = salary * 0.01;
  }
  printf("税金: %.2lf\n", tax);
}