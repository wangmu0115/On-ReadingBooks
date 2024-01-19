#include <stdio.h>

int main(void) {
  printf("Enter a number: ");
  char ch;
  int num_times[10] = {0};
  while ((ch = getchar()) != '\n') {
    int num = ch - '0';
    num_times[num] = num_times[num] + 1;
  }
  printf("Digit:       ");
  for (int n = 0; n < 10; n++) {
    printf("%4d", n);
  }
  printf("\n");
  printf("Occurrences: ");
  for (int n = 0; n < 10; n++) {
    printf("%4d", num_times[n]);
  }
  printf("\n");
  return 0;
}