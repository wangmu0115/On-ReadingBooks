#include <stdio.h>

int main(void) {
  int a[] = {5, 15, 34, 54, 12, 2, 52, 72};
  // p -> index=1的地址, q -> index=5的地址
  int *p = &a[1], *q = &a[5];
  // p+3 = &a[1+3] = &a[4]
  printf("%d\n", *(p + 3));  // 12
  printf("%d\n", *(q - 3));  // 34
}