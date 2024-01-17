#include <stdbool.h>
#include <stdio.h>

int main(void) {
  printf("Enter a first and last name: ");
  char ch;
  char first_name_letter = ' ';
  bool last_name_begin = false;
  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      if (first_name_letter != ' ') {
        last_name_begin = true;
      }
    } else {
      if (last_name_begin) {
        printf("%c", ch);
      } else {
        if (first_name_letter == ' ') {
          first_name_letter =
              ((ch >= 'a' && ch <= 'z') ? (ch + 'A' - 'a') : ch);
        }
      }
    }
  }
  printf(", %c\n", first_name_letter);
}