#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// clubs(梅花), diamonds(方块), hearts(红桃), spades(黑桃)
#define NUM_SUITS 4
// 2~9, T(10), J, Q, K, A
#define NUM_RANKS 13

int main(void) {
  int num_cards;
  bool in_hands[NUM_SUITS][NUM_RANKS] = {false};
  char suits[NUM_SUITS] = {'c', 'd', 'h', 's'};
  char ranks[NUM_RANKS] = {'2', '3', '4', '5', '6', '7', '8',
                           '9', 'T', 'J', 'Q', 'K', 'A'};
  // 初始化随机数器
  srand((unsigned int)time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);
  printf("Your hand: ");
  while (num_cards > 0) {
    int suitIdx = rand() % NUM_SUITS;
    int rankIdx = rand() % NUM_RANKS;
    if (in_hands[suitIdx][rankIdx]) {
      continue;
    }
    printf(" %c%c", suits[suitIdx], ranks[rankIdx]);
    in_hands[suitIdx][rankIdx] = true;
    num_cards--;
  }
  printf("\n");
  return 0;
}