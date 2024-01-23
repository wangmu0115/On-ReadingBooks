#include <stdio.h>

#define N 10

void sort(int low, int high, int a[]);

int main(void) {
  int a[N];
  printf("Enter %d numbers to be sorted: ", N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }
  sort(0, N - 1, a);
  printf("In sorted order:");
  for (int i = 0; i < N; i++) {
    printf(" %d", a[i]);
  }
  printf("\n");
}

void sort(int low, int high, int a[]) {
  if (low >= high) {
    return;
  }
  int low_base = low, high_base = high;
  // 基准值
  int part_element = a[low];
  for (;;) {
    while (low < high && part_element <= a[high]) {
      high--;
    }
    if (low >= high) {
      break;
    }
    a[low++] = a[high];
    while (low < high && a[low] <= part_element) {
      low++;
    }
    if (low >= high) {
      break;
    }
    a[high--] = a[low];
  }
  a[high] = part_element;

  sort(low_base, low - 1, a);
  sort(high + 1, high_base, a);
}