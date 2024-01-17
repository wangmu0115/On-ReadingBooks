#include <stdio.h>

int main() {
  int hour, minute;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  if (hour > 12) {
    printf("Equivalent 12-hour time: %02d:%02d PM\n", (hour - 12), minute);
  } else {
    printf("Equivalent 12-hour time: %02d:%02d AM\n", hour, minute);
  }
  return 0;
}