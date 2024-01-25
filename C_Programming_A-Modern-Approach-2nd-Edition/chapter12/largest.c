#include <stdio.h>

int find_largest(int *a, int n);

int main(void) {
  int b[] = {12, 13, 14, 0, 7, 10, 6, 11};
  printf("%d\n", find_largest(&b[0], 8));
  printf("%d\n", find_largest(&b[3], 5));
}

int find_largest(int *a, int n) {
  int largest = *a;
  int *p = a + 1;
  while (p < a + n) {
    if (*p > largest) {
      largest = *p;
    }
    p++;
  }
  return largest;
}