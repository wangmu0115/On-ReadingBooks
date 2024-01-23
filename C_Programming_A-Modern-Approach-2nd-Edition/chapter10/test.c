#include <stdio.h>

#define CARDS_NUM 5

int main(void) {
  int hand[CARDS_NUM][1];
  hand[0][0] = 11;
  hand[1][0] = 4;
  hand[2][0] = 4;
  hand[3][0] = 11;
  hand[4][0] = 9;

  int hand_ranks[CARDS_NUM] = {0};
  for (int i = 0; i < CARDS_NUM; i++) {
    int rank = hand[i][0];
    int j = 0;
    while (j < CARDS_NUM) {
      if (rank > hand_ranks[j]) {
        j++;
      } else {
        break;
      }
    }
    for (int k = 0; k < j; k++) {
      hand_ranks[k] = hand_ranks[k + 1];
    }
    hand_ranks[j - 1] = rank;
  }
  printf("\n\n");
  for (int i = 0; i < CARDS_NUM; i++) {
    printf("%d ", hand_ranks[i]);
  }

  return 0;
}