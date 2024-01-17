#include <stdio.h>

int main(void) {
  printf("Enter a number: ");
  char ch;
  int num_times[10] = {0};
  while ((ch = getchar()) != '\n') {
    int num = ch - '0';
    num_times[num] = num_times[num] + 1;
  }
  printf("Repeated digit(s):");
  for (int n = 0; n < 10; n++) {
    if (num_times[n] > 1) {
      printf(" %d", n);
    }
  }
  printf("\n");
  return 0;
}