#include <stdio.h>

int main(void) {
  double num, max = 0.0;
  while (1) {
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
      printf("The largest number entered was %lf\n", max);
      break;
    } else {
      max = num > max ? num : max;
    }
  }
  return 0;
}