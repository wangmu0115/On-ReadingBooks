#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int word_cnt = 0;
  int sentence_letter_cnt = 0;
  printf("Enter a sentence: ");

  char ch;
  bool isPreLetter = false;
  while ((ch = getchar()) != '\n') {
    if (('a' <= ch && 'z' >= ch) || ('A' <= ch && 'Z' >= ch)) {
      sentence_letter_cnt += 1;
      if (!isPreLetter) {
        isPreLetter = true;
      }
    } else {
      if (ch == ' ' && isPreLetter) {
        word_cnt += 1;
        isPreLetter = false;
      }
    }
  }
  if (isPreLetter) {
    word_cnt += 1;
  }
  printf("Sentence letters: %d, word count: %d\n", sentence_letter_cnt,
         word_cnt);
  printf("Average word length: %.1lf\n",
         sentence_letter_cnt / ((double)word_cnt));
}