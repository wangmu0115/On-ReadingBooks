#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int grade, ten_value, one_value;
  printf("Enter numerical grade: ");
  scanf("%d", &grade);
  if (grade < 0) {
    printf("Error grade: %d\n", grade);
    return 0;
  }

  ten_value = grade / 10;
  one_value = grade % 10;
  char letter_grade;
  bool isError = false;
  switch (ten_value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      letter_grade = 'F';
      break;
    case 6:
      letter_grade = 'D';
      break;
    case 7:
      letter_grade = 'C';
      break;
    case 8:
      letter_grade = 'B';
      break;
    case 9:
      letter_grade = 'A';
      break;
    case 10:
      if (one_value > 0) {
        isError = true;
      } else {
        letter_grade = 'A';
      }
      break;
    default:
      isError = true;
  }

  if (isError) {
    printf("Error grade: %d\n", grade);
  } else {
    printf("Letter grade: %c\n", letter_grade);
  }
  return 0;
}