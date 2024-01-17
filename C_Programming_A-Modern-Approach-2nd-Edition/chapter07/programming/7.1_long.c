#include <stdbool.h>
#include <stdio.h>

int main(void) {
  long int i = 1L;
  long int min_val = 1L;
  long sq = 1L;
  long last_sq;
  while (true) {
    last_sq = sq;
    sq = i * i;
    if (sq / i != i) {
      min_val = i - 1;
      break;
    }
    i++;
  }
  printf("sq=%ld, last sq = %ld, last val = %ld\n", sq, last_sq, min_val);
}