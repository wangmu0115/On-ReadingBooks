#include <stdio.h>

int main(void) {
  int n;
  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &n);

  int matrix[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matrix[i][j] = 0;
    }
  }

  int x = 0, y = n / 2;
  for (int i = 1; i <= n * n; i++) {
    while (matrix[x][y] != 0) {
      x = x + 1;
      if (x >= n) {
        x = 0;
      }
    }
    matrix[x][y] = i;

    int new_x = (x - 1 < 0) ? (n - 1) : (x - 1);
    int new_y = (y + 1 >= n) ? 0 : (y + 1);
    if (matrix[new_x][new_y] != 0) {
      new_x = x + 1;
      new_y = y;
      if (new_x >= n) {
        new_x = 0;
      }
    }
    x = new_x;
    y = new_y;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf(" %2d ", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}