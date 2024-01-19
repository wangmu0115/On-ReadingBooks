#include <stdio.h>

int main(void) {
  int a[5][5];
  for (int row = 1; row <= 5; row++) {
    printf("Enter row %d: ", row);
    for (int column = 1; column <= 5; column++) {
      scanf("%d", &a[row - 1][column - 1]);
    }
  }
  int row_total[5] = {0};
  int column_total[5] = {0};
  for (int row = 0; row <= 4; row++) {
    for (int column = 0; column <= 4; column++) {
      int value = a[row][column];
      row_total[row] += value;
      column_total[column] += value;
    }
  }
  printf("Row totals:");
  for (int i = 0; i <= 4; i++) {
    printf(" %d", row_total[i]);
  }
  printf("\n");
  printf("Column totals:");
  for (int i = 0; i <= 4; i++) {
    printf(" %d", column_total[i]);
  }
  printf("\n");
}