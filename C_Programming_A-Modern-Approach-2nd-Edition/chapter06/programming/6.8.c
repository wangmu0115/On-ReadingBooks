/**
 * Enter number of days in month: 31
 Enter starting day of the week (1=Sun, 7=Sat): 3
12345 6 7 8 9101112 13 14 15 16 17 18 19 20 21 22 23 24 25 26
27 28 29 30 31
*/
#include <stdio.h>

int main(void) {
  int days, startingDay;
  printf("Enter number of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &startingDay);
  for (int i = 1; i < startingDay; i++) {
    printf("    ");
  }
  for (int i = 1; i <= days; i++) {
    printf("  %2d", i);
    if ((i + startingDay - 1) % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}