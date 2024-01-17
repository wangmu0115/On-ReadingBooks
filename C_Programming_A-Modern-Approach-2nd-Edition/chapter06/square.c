#include <stdio.h>

int main(void) {
  int num;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &num);

  int i = 1;
  while (i <= num) {
    printf("%10d%10d\n", i, i * i);
    i++;
  }
  return 0;
}