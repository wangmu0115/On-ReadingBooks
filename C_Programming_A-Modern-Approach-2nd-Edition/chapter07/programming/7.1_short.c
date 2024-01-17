#include <stdbool.h>
#include <stdio.h>

int main(void) {
  short int i = 1;
  short int min_val = 1;
  short int sq = 1;
  short int last_sq;
  while (true) {
    last_sq = sq;
    sq = i * i;
    printf("sq=%hd, last sq = %hd, last val = %hd\n", sq, last_sq, i);
    if (sq / i != i) {
      min_val = i - 1;
      break;
    }
    i++;
  }
  printf("sq=%hd, last sq = %hd, last val = %hd\n", sq, last_sq, min_val);
}