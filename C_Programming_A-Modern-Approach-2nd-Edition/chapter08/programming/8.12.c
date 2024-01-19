#include <ctype.h>
#include <stdio.h>

void initCharPoints(char ches[], int ches_length, int point,
                    int char_points[]) {
  for (int i = 0; i < ches_length; i++) {
    char ch = ches[i];
    char_points[ch - 'A'] = point;
  }
}

int main(void) {
  int char_points[26];
  // 1——AEILNORSTU; 2——DG; 3—— BCMP; 4——FHVWY; 5——K; 8——JX; 10——QZ
  char ches1[] = {'A', 'E', 'I', 'L', 'N', 'O', 'R', 'S', 'T', 'U'};
  initCharPoints(ches1, sizeof(ches1) / sizeof(char), 1, char_points);
  char ches2[] = {'D', 'G'};
  initCharPoints(ches2, sizeof(ches2) / sizeof(char), 2, char_points);
  char ches3[] = {'B', 'C', 'M', 'P'};
  initCharPoints(ches3, sizeof(ches3) / sizeof(char), 3, char_points);
  char ches4[] = {'F', 'H', 'V', 'W', 'Y'};
  initCharPoints(ches4, sizeof(ches4) / sizeof(char), 4, char_points);
  char ches5[] = {'K'};
  initCharPoints(ches5, sizeof(ches5) / sizeof(char), 5, char_points);
  char ches6[] = {'J', 'X'};
  initCharPoints(ches6, sizeof(ches6) / sizeof(char), 8, char_points);
  char ches7[] = {'Q', 'Z'};
  initCharPoints(ches7, sizeof(ches7) / sizeof(char), 10, char_points);

  printf("Enter a word: ");
  char ch;
  int total_point = 0;
  while ((ch = getchar()) != '\n') {
    total_point += char_points[toupper(ch) - 'A'];
  }
  printf("Scrabble value: %d\n", total_point);
}