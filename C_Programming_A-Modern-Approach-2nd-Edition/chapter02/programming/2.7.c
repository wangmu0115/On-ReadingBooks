#include <stdio.h>

int main(void) {
  int dollar;
  printf("Enter a dollar amount: ");
  scanf("%d", &dollar);
  int dollar_20 = dollar / 20;
  dollar -= 20 * dollar_20;
  int dollar_10 = dollar / 10;
  dollar -= 10 * dollar_10;
  int dollar_5 = dollar / 5;
  int dollar_1 = dollar - 5 * dollar_5;

  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n",
         dollar_20, dollar_10, dollar_5, dollar_1);
}