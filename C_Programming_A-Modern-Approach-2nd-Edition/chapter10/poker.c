#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// 2, 3, 4, 5, 6, 7, 8, 9, t, j, q, k, a
#define RANKS_NUM 13
// c, d, h, s
#define SUITS_NUM 4
#define CARDS_NUM 5

int hand_ranks[RANKS_NUM];
int hand_suits[SUITS_NUM];

void read_cards(void);
void analyze_hand(void);
void print_result(void);
int get_rank_index(char rank);
int get_suit_index(char suit);

bool straight, flush, four, three;
int pairs;

int main(void) {
  while (true) {
    read_cards();
    analyze_hand();
    print_result();
  }

  return 0;
}

void read_cards(void) {
  bool card_exits[RANKS_NUM][SUITS_NUM];
  // 初始化读取结果
  for (int i = 0; i < RANKS_NUM; i++) {
    hand_ranks[i] = 0;
    for (int j = 0; j < SUITS_NUM; j++) {
      card_exits[i][j] = false;
    }
  }
  for (int i = 0; i < SUITS_NUM; i++) {
    hand_suits[i] = 0;
  }

  // 读取Card
  int cards_read = 0;
  char rank, suit;
  int rank_index, suit_index;
  bool bad_card;
  while (cards_read < CARDS_NUM) {
    bad_card = false;
    printf("Enter a card: ");
    // Rank
    rank = getchar();
    if (rank == '0') {
      exit(EXIT_SUCCESS);
    } else {
      rank_index = get_rank_index(rank);
    }
    if (rank_index == -1) bad_card = true;
    // Suit
    suit = getchar();
    suit_index = get_suit_index(suit);
    if (suit_index == -1) bad_card = true;
    // 可能存在更多的字符
    char more_ch;
    while ((more_ch = getchar()) != '\n') {
      if (more_ch != ' ') {
        bad_card = true;
      }
    }
    // Card 判断是否有效
    if (bad_card) {
      printf("Bad card; ignored.\n");
    } else if (card_exits[rank_index][suit_index]) {
      printf("Duplicate card; ignored.\n");
    } else {
      card_exits[rank_index][suit_index] = true;
      hand_suits[suit_index]++;
      hand_ranks[rank_index]++;
      cards_read++;
    }
  }
}

void analyze_hand(void) {
  // 初始化分析结果
  int num_consec = 0;
  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;
  // flush
  for (int i = 0; i < SUITS_NUM; i++) {
    if (hand_suits[i] == CARDS_NUM) {
      flush = true;
    }
  }

  // straight
  int rank = 0;
  while (hand_ranks[rank] == 0) rank++;
  for (; rank < RANKS_NUM && hand_ranks[rank] > 0; rank++) num_consec++;
  if (num_consec == CARDS_NUM) {
    straight = true;
    return;
  }

  // four three pairs
  for (int i = 0; i < RANKS_NUM; i++) {
    int ones[CARDS_NUM], one_index = 0;
    if (hand_ranks[i] == 4) {
      four = true;
    } else if (hand_ranks[i] == 3) {
      three = true;
    } else if (hand_ranks[i] == 2) {
      pairs += 1;
    }
  }
}

void print_result(void) {
  if (straight && flush)
    printf("Straight flush");
  else if (four)
    printf("Four of a kind");
  else if (three && pairs == 1)
    printf("Full house");
  else if (flush)
    printf("Flush");
  else if (straight)
    printf("Straight");
  else if (three)
    printf("Three of a kind");
  else if (pairs == 2)
    printf("Two pairs");
  else if (pairs == 1)
    printf("Pair");
  else
    printf("High card");
  printf("\n\n");
}

int get_rank_index(char rank) {
  int index;
  if (rank >= '2' && rank <= '9') {
    index = rank - '2';
  } else {
    switch (rank) {
      case 't':
      case 'T':
        index = 8;
        break;
      case 'j':
      case 'J':
        index = 9;
        break;
      case 'q':
      case 'Q':
        index = 10;
        break;
      case 'k':
      case 'K':
        index = 11;
        break;
      case 'a':
      case 'A':
        index = 12;
        break;
      default:
        index = -1;
        break;
    }
  }
  return index;
}

int get_suit_index(char suit) {
  switch (suit) {
    case 'c':
    case 'C':
      return 0;
    case 'd':
    case 'D':
      return 1;
    case 'h':
    case 'H':
      return 2;
    case 's':
    case 'S':
      return 3;
    default:
      return -1;
  }
}