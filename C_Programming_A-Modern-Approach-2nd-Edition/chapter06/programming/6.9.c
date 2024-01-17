#include <stdio.h>

int main(void) {
  double loan, interest_rate, monthly_payment;
  int times;
  printf("Enter amount of loan: ");
  scanf("%lf", &loan);
  printf("Enter interest rate: ");
  scanf("%lf", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%lf", &monthly_payment);
  printf("Enter times: ");
  scanf("%d", &times);

  printf("------------------------------\n");
  for (int i = 1; i <= times; i++) {
    double balance = loan * interest_rate / 100 / 12 + loan - monthly_payment;
    printf("Balance remaining after %d payment: $%.2lf\n", i, balance);
    loan = balance;
  }
  return 0;
}