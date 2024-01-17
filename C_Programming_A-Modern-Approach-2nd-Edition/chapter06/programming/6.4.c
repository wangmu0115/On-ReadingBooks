#include <stdio.h>

int main() {
  int trade;
  while (1) {
    printf("Enter value of trade: ");
    scanf("%d", &trade);
    if (trade <= 0) {
      break;
    }
    float commision = 0.0;
    if (trade < 2500) {
      commision = 30 + trade * 1.7 / 100;
    } else if (trade < 6250) {
      commision = 56 + trade * 0.66 / 100;
    } else if (trade < 20000) {
      commision = 76 + trade * 0.34 / 100;
    } else if (trade < 50000) {
      commision = 100 + trade * 0.22 / 100;
    } else if (trade < 500000) {
      commision = 155 + trade * 0.11 / 100;
    } else {
      commision = 255 + trade * 0.09 / 100;
    }
    if (commision <= 39.00f) {
      commision = 39.00f;
    }
    printf("Commission: $%.2f\n", commision);
  }
  return 0;
}