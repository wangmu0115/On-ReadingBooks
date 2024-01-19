#include <stdio.h>

#define LENGTH_SENTENCE 2048

int main(void) {
  // ? ! .
  char end_char = ' ';
  char sentence[LENGTH_SENTENCE];

  printf("Enter a sentence: ");
  char ch;
  int sentence_size = 0;
  while ((ch = getchar()) != '\n') {
    if (ch == '.' || ch == '?' || ch == '!') {
      end_char = ch;
      break;
    }
    sentence[sentence_size++] = ch;
  }
  printf("Reversal of sentence: ");
  for (int i = sentence_size - 1; i >= 0;) {
    int word_start = i;
    int word_end = i;
    while (word_start >= 0 && sentence[word_start] != ' ') {
      word_start--;
    }
    for (int wi = word_start + 1; wi <= word_end; wi++) {
      printf("%c", sentence[wi]);
    }
    if (word_start > 0) {
      printf(" ");
    }
    i = word_start - 1;
  }
  printf("%c\n", end_char);
  return 0;
}