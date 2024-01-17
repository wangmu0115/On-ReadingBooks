#include <stdio.h>

int main() {
  long num, sum;
  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate): ");

  sum = 0;
  scanf("%ld", &num);
  while (num != 0) {
    sum += num;
    scanf("%ld", &num);
  }
  printf("The sum is: %ld\n", sum);
}