#include <stdio.h>

#define LENGTH_MESSAGE 80

int main(void) {
  char message[LENGTH_MESSAGE] = {'\0'};

  char ch;
  int index = 0;
  int shift;
  printf("Enter message to be encrypted: ");
  while ((ch = getchar()) != '\n') {
    message[index++] = ch;
  }
  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Encrypted message: ");
  for (int i = 0; i < LENGTH_MESSAGE; i++) {
    if (message[i] == '\0') {
      break;
    }
    char ch = message[i];
    if (ch >= 'a' && ch <= 'z') {
      printf("%c", ('a' + (ch - 'a' + shift) % 26));
    } else if (ch >= 'A' && ch <= 'Z') {
      printf("%c", ('A' + (ch - 'A' + shift) % 26));
    } else {
      printf("%c", ch);
    }
  }
  printf("\n");

  return 0;
}