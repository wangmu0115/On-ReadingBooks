/* Reverses a series of numbers */
#include <stdio.h>

#define num_length ((int)(sizeof(a) / sizeof(a[0])))

int main(void) {
  int a[10];
  printf("Enter %d numbers: ", num_length);
  for (int i = 0; i < num_length; i++) {
    scanf("%d", &a[i]);
  }
  printf("In reverse order:");
  for (int i = num_length - 1; i >= 0; i--) {
    printf(" %d", a[i]);
  }
  printf("\n");
  return 0;
}