#include <stdio.h>

int compGod(int num1, int num2) {
  int god = 1;
  for (int i = 1; i <= (num1 > num2 ? num2 : num1); i++) {
    if (num1 % i == 0 && num2 % i == 0) {
      god = i;
    }
  }
  return god;
}

int main(void) {
  int numerator, denominator;
  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);
  int god = compGod(numerator, denominator);
  if (denominator == god) {
    printf("In lowest terms: %d\n", (numerator / god));
  } else {
    printf("In lowest terms: %d/%d\n", (numerator / god), (denominator / god));
  }
  return 0;
}