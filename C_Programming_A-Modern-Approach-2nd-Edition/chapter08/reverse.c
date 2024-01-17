#include <stdio.h>

#define N 10

int main(void) {
  int a[N];
  printf("Enter %d numbers: ", N);
  for (int idx = 0; idx < N; idx++) {
    scanf("%d", &a[idx]);
  }
  printf("In reverse order: ");
  for (int idx = N - 1; idx >= 0; idx--) {
    printf("%d ", a[idx]);
  }
  printf("\n");
  return 0;
}