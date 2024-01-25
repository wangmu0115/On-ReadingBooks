#include <stdio.h>

#define N 10

int main(void) {
  char ch;
  char sentence[N];
  printf("Enter a message: ");

  // (a)
  //   int read = 0;
  //   while (read < N && ((ch = getchar()) != '\n')) {
  //     sentence[read++] = ch;
  //   }
  //   printf("Reversal is: ");
  //   for (int i = read - 1; i >= 0; i--) {
  //     printf("%c", sentence[i]);
  //   }
  //   printf("\n");
  // (b)
  char *p = sentence;
  while ((p < (sentence + N))) {
    scanf("%c", p);
    if (*p == '\n') {
      p--;
      break;
    } else if (p == sentence + N - 1) {
      break;
    } else {
      p++;
    }
  }
  printf("Reversal is: ");
  while (p >= sentence) {
    printf("%c", *p);
    p--;
  }
  printf("\n");
}