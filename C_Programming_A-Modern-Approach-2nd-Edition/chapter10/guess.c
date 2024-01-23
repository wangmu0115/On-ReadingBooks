#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int secret_num;

int main(void) {
  printf("Guess the secret number between 1 and 100.\n");
  for (;;) {
    secret_num = rand() % 100 + 1;
    printf("A new number has been chosen.\n");
    int guess_num;
    int guess_times = 0;
    while (true) {
      printf("Enter guess: ");
      scanf("%d", &guess_num);
      guess_times++;
      if (guess_num > secret_num) {
        printf("Too high; try again.\n");
      } else if (guess_num < secret_num) {
        printf("Too low; try again.\n");
      } else {
        printf("You won in %d guesses!\n", guess_times);
        break;
      }
    }
    printf("\n");
    printf("Play again? (Y/N)");
    getchar();
    if (tolower(getchar()) != 'y') {
      break;
    }
  }
}