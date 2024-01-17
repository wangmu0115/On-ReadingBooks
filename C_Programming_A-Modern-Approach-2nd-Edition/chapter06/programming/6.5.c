#include <stdio.h>

int main(void) {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  int reverse_num = 0;
  do {
    reverse_num = reverse_num * 10 + (num % 10);
    num /= 10;
  } while (num > 0);
  printf("Reverse number: %d\n", reverse_num);
  return 0;
}