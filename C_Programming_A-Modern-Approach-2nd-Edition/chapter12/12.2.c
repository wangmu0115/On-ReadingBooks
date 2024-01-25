#include <stdio.h>

#define N 6

int main(void) {
  int a[N] = (int[]){3, 5, 2, 4, 7, 6};
  int sum = 0;
  for (int *p = &a[0]; p <= &a[N - 1]; p++) {
    sum += *p;
  }
  printf("Sum is %d\n", sum);
}