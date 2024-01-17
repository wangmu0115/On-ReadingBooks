#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 2; i <= n; i += 2) {
    if (i * i <= n) {
      printf("%d\n", i * i);
    } else {
      break;
    }
  }
  return 0;
}