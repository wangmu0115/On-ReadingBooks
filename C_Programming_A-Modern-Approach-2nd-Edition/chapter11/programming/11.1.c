#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
  int dollar;
  printf("Enter a dollar amount: ");
  scanf("%d", &dollar);
  int dollar_20, dollar_10, dollar_5, dollar_1;
  pay_amount(dollar, &dollar_20, &dollar_10, &dollar_5, &dollar_1);

  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n",
         dollar_20, dollar_10, dollar_5, dollar_1);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  *twenties = dollars / 20;
  dollars -= 20 * (*twenties);
  *tens = dollars / 10;
  dollars -= 10 * (*tens);
  *fives = dollars / 5;
  *ones = dollars - 5 * (*fives);
}