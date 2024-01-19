/* Checks numbers for repeated digits */
#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void) {
  bool digit_seen[10] = {false};
  int digit;
  long n;

  for (;;) {
    printf("Enter a number: ");
    scanf("%ld", &n);
    if (n <= 0L) {
      return 0;
    }
    while (n > 0L) {
      digit = n % 10;
      if (digit_seen[digit]) {
        break;
      } else {
        digit_seen[digit] = true;
      }
      n = n / 10;
    }
    if (n == 0L) {
      printf("No repeated digit\n");
    } else {
      printf("Repeated digit\n");
    }
    for (int i = 0; i < 10; i++) {
      digit_seen[i] = false;
    }
  }
  return 0;
}