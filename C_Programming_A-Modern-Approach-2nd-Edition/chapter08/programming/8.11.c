#include <stdio.h>

#define NUM_PHONE 15

int main(void) {
  char phone[NUM_PHONE] = {'\0'};
  printf("Enter phone number: ");
  char ch;
  int idx = 0;
  while ((ch = getchar()) != '\n') {
    switch (ch) {
      case 'A':
      case 'B':
      case 'C':
        phone[idx] = '2';
        break;
      case 'D':
      case 'E':
      case 'F':
        phone[idx] = '3';
        break;
      case 'G':
      case 'H':
      case 'I':
        phone[idx] = '4';
        break;
      case 'J':
      case 'K':
      case 'L':
        phone[idx] = '5';
        break;
      case 'M':
      case 'N':
      case 'O':
        phone[idx] = '6';
        break;
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
        phone[idx] = '7';
        break;
      case 'T':
      case 'U':
      case 'V':
        phone[idx] = '8';
        break;
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
        phone[idx] = '9';
        break;
      default:
        phone[idx] = ch;
        break;
    }
    idx++;
  }
  printf("In numeric form: ");
  for (int i = 0; i < NUM_PHONE; i++) {
    if (phone[i] == '\0') {
      break;
    } else {
      printf("%c", phone[i]);
    }
  }
  printf("\n");
}