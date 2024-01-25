#include <stdio.h>

void print2DArray(int m, int n, int a[m][n]) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
}

int main(void) {
  //   int n = 10;
  //   int a[] = {3, 5, 7, 2, 4, 8, 1, 9, 0, 6};
  //   for (int i = 0; i < n; i++) {
  //     printf("%d ", a[i]);
  //   }
  //   printf("\n");
  //   for (int *p = a; p < a + n; p++) {
  //     printf("%d ", *p);
  //   }
  //   printf("\n");
  //   for (int *p = &a[0]; p < &a[n]; p++) {
  //     printf("%d ", *p);
  //   }
  //   printf("\n");
  //   int *p = x;
  //   printf("%d", *p);
  //   printf("%d", *(p + 2));

  int row_nums = 5, col_nums = 3;
  int a[row_nums][col_nums];
  for (int i = 0; i < row_nums; i++) {
    for (int j = 0; j < col_nums; j++) {
      a[i][j] = (i * j) + (i + j);
    }
  }
  print2DArray(row_nums, col_nums, a);
  int j = 2;
  for (int(*p)[col_nums] = &a[0]; p <= &a[row_nums - 1]; p++) {
    (*p)[j] = 0;
  }
  print2DArray(row_nums, col_nums, a);
  //   int j = 2;

  //   int(*p)[n] = &a[0];
  //   printf("%d", *p[2]);

  //   int x[10] = {3, 5, 7, 2, 4, 8, 1, 9, 0, 6};
  //   int *p = x;
  //   printf("%d", *p);
  //   printf("%d", *(p + 2));

  //   int(*p)[10] = &x;

  //   printf("%d", (*p)[3]);

  //   int i = 3;
  //   for (int *p = &a[i][0]; p <= &a[i][n - 1]; p++) {
  //     printf("%d ", *p);
  //   }
  //   for (int *p = a[i]; p < a[i] + n; p++) {
  //     printf("%d ", *p);
  //   }

  //   int i = 3;
  //   for (int *p = a[i]; p < a[i] + 3; p++) {
  //     *p = 0;
  //   }
  //   print2DArray(5, 3, a);

  //   int j = 2;
  //   int(*p)[3];
  //   for (p = &a[0]; p < &a[5]; p++) {
  //     (*p)[j] = 0;
  //   }
  //   print2DArray(5, 3, a);
  return 0;
}