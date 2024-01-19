#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define FIRST_NAME_LENGTH 20

int main(void) {
  printf("Enter a first and last name: ");
  int first_name_idx = 0;
  char first_name[FIRST_NAME_LENGTH];
  char ch;
  bool showLastName = false;
  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      showLastName = true;
      printf("You enered the name: ");
    } else {
      if (showLastName) {
        printf("%c", ch);
      } else {
        first_name[first_name_idx++] = ch;
      }
    }
  }
  printf(", %c.\n", toupper(first_name[0]));
  return 0;
}