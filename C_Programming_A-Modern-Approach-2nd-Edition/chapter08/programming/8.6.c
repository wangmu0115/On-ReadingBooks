#include <ctype.h>
#include <stdio.h>

#define N 1024

int main(void) {
  char ch_arr[N] = {'\0'};
  printf("Enter message: ");
  int idx = 0;
  char ch;
  while ((ch = getchar()) != '\n') {
    ch_arr[idx++] = ch;
  }
  printf("In B1FF-speak: ");
  for (int i = 0; i < N; i++) {
    if (ch_arr[i] == '\0') {
      break;
    }
    char b1ff_ch = toupper(ch_arr[i]);
    switch (b1ff_ch) {
      case 'A':
        printf("4");
        break;
      case 'B':
        printf("8");
        break;
      case 'E':
        printf("3");
        break;
      case 'I':
        printf("1");
        break;
      case 'O':
        printf("0");
        break;
      case 'S':
        printf("5");
        break;
      default:
        printf("%c", b1ff_ch);
        break;
    }
  }
  for (int i = 0; i < 10; i++) {
    printf("!");
  }
  printf("\n");
  return 0;
}