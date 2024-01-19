#include <ctype.h>
#include <stdio.h>

int main(void) {
  int word_ches[26] = {0};

  char ch;
  printf("Enter first word: ");
  while (isalpha(ch = getchar())) {
    word_ches[tolower(ch) - 'a']++;
  }
  printf("Enter second word: ");
  while (isalpha(ch = getchar())) {
    word_ches[tolower(ch) - 'a']--;
  }
  for (int i = 0; i < 26; i++) {
    if (word_ches[i] != 0) {
      printf("The words are not anagrams.\n");
      return 0;
    }
  }
  printf("The words are anagrams.\n");
  return 0;
}