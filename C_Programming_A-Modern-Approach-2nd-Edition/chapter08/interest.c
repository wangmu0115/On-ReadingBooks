#include <stdio.h>

#define NUM_RATES ((int)(sizeof(values) / sizeof(values[0])))
#define INITIAL_BALANCE 100.00

int main(void) {
  double values[5];
  int rates[NUM_RATES];
  int low_rate, num_years;
  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  // 初始化
  for (int i = 0; i < NUM_RATES; i++) {
    values[i] = INITIAL_BALANCE;
    rates[i] = low_rate + i;
  }
  printf("\nYears");
  for (int i = 0; i < NUM_RATES; i++) {
    printf("%6d%%", rates[i]);
  }
  printf("\n");

  for (int year = 1; year <= num_years; year++) {
    printf("%3d    ", year);
    for (int i = 0; i < NUM_RATES; i++) {
      double value = values[i] * (1.0 + rates[i] / 100.0);
      values[i] = value;
      printf("%7.2lf", value);
    }
    printf("\n");
  }
}