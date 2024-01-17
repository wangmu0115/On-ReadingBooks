#include <stdio.h>

int main(void) {
  printf(
      "This program sums a series of integers.\nEnter integers(0 to "
      "terminate): ");
  int sum = 0;
  while (1) {
    int num;
    scanf("%d", &num);
    if (num == 0) {
      break;
    } else {
      sum += num;
    }
  }
  printf("The sum is: %d\n", sum);
}