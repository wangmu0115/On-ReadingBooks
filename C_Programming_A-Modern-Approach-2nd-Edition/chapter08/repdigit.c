#include <stdio.h>

int main(void) {
  int a[10] = {0};
  printf("Enter a number: ");
  char ch;
  while ((ch = getchar()) != '\n') {
    int idx = ch - '0';
    if (a[idx] != 0) {
      printf("Repeated digit\n");
      return 0;
    } else {
      a[idx] = 1;
    }
  }
  printf("No Repeated digit\n");
  return 0;
}