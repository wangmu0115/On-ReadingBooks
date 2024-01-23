#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
  int a[N];
  printf("Enter %d numbers: ", N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }
  int max, min;
  max_min(a, N, &max, &min);
  printf("Largest: %d\nSmallest: %d\n", max, min);
}

void max_min(int a[], int n, int *max, int *min) {
  *max = a[0];
  *min = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > (*max)) {
      *max = a[i];
    }
    if (a[i] < (*min)) {
      *min = a[i];
    }
  }
}