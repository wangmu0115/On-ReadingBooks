#include <stdio.h>

int main() {
  int amount;
  float price;
  printf("Enter amount of stock: ");
  scanf("%d", &amount);
  printf("Enter price of stock: ");
  scanf("%f", &price);

  float trade = amount * price;

  float competitor_commision, commision;
  if (amount < 2000) {
    competitor_commision = 33 + 0.03 * amount;
  } else {
    competitor_commision = 33 + 0.02 * amount;
  }
  if (trade <= 0) {
    commision = 0;
  } else if (trade < 2500)
    commision = 30 + trade * 1.7 / 100;
  else if (trade < 6250)
    commision = 56 + trade * 0.66 / 100;
  else if (trade < 20000)
    commision = 76 + trade * 0.34 / 100;
  else if (trade < 50000)
    commision = 100 + trade * 0.22 / 100;
  else if (trade < 500000)
    commision = 155 + trade * 0.11 / 100;
  else
    commision = 255 + trade * 0.09 / 100;
  if (commision <= 39.00f) {
    commision = 39.00f;
  }
  printf("Commission: $%.2f\n Competitor Commission: $%.2f\n", commision,
         competitor_commision);

  return 0;
}