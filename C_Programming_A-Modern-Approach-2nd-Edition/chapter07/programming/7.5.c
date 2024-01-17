#include <ctype.h>
#include <stdio.h>

int main(void) {
  // 1——AEILNORSTU; 2——DG; 3—— BCMP; 4——FHVWY; 5——K; 8——JX; 10——QZ
  printf("Enter a word: ");
  char ch;
  int points = 0;
  while ((ch = getchar()) != '\n') {
    switch (toupper(ch)) {
      case 'A':
      case 'E':
      case 'I':
      case 'L':
      case 'N':
      case 'O':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
        points += 1;
        break;
      case 'D':
      case 'G':
        points += 2;
        break;
      case 'B':
      case 'C':
      case 'M':
      case 'P':
        points += 3;
        break;
      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y':
        points += 4;
        break;
      case 'K':
        points += 5;
        break;
      case 'J':
      case 'X':
        points += 8;
        break;
      case 'Q':
      case 'Z':
        points += 10;
      default:
        break;
    }
  }
  printf("Scrabble value: %d\n", points);
}
