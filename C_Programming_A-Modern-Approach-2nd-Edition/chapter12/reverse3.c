#include <stdio.h>

#define N 10

int main(void) {
  int a[N];
  printf("Enter %d numbers: ", N);
  for (int *p = a; p < a + N; p++) {
    scanf("%d", p);
  }
  printf("In reverse order:");
  for (int *p = a + N - 1; p >= a; p--) {
    printf(" %d", *p);
  }
  printf("\n");
  return 0;
}