#include <ctype.h>
#include <stdio.h>

int main(void) {
  printf("Enter a sentence: ");
  char ch;
  int vowel_count = 0;
  while ((ch = getchar()) != '\n') {
    switch (toupper(ch)) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        vowel_count += 1;
        break;
      default:
        break;
    }
  }
  printf("Your sentence contains %d vowels.\n", vowel_count);
}