#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// 2, 3, 4, 5, 6, 7, 8, 9, t, j, q, k, a
#define RANKS_NUM 13
// c, d, h, s
#define SUITS_NUM 4
#define CARDS_NUM 5

// [][0] rank, [][1] suit
// [0][] 第一张牌, [1][] 第二张牌, ...
int hand[CARDS_NUM][2];

void read_cards(void);
void analyze_hand(void);
void print_result(void);
// '2'=0, ..., 'a'/'A'=12
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
  // 初始化读取结果
  for (int i = 0; i < CARDS_NUM; i++) {
    hand[i][0] = -1;
    hand[i][1] = -1;
  }

  // 读取Card
  int cards_read = 0;
  char rank, suit;
  bool bad_card;
  while (cards_read < CARDS_NUM) {
    bad_card = false;
    printf("Enter a card: ");
    // Rank
    rank = getchar();
    if (rank == '0') {
      exit(EXIT_SUCCESS);
    }
    int rank_index = get_rank_index(rank);
    // Suit
    suit = getchar();
    int suit_index = get_suit_index(suit);
    // 是否是正常的Card
    bad_card = rank_index < 0 || suit_index < 0;
    // 可能存在更多的字符
    char more_ch;
    while ((more_ch = getchar()) != '\n') {
      if (more_ch != ' ') {
        bad_card = true;
      }
    }
    bool is_duplicate_card = false;
    for (int i = 0; i < cards_read; i++) {
      if (rank_index == hand[i][0] && suit_index == hand[i][1]) {
        is_duplicate_card = true;
      }
    }

    // Card 判断是否有效
    if (bad_card) {
      printf("Bad card; ignored.\n");
    } else if (is_duplicate_card) {
      printf("Duplicate card; ignored.\n");
    } else {
      hand[cards_read][0] = rank_index;
      hand[cards_read][1] = suit_index;
      cards_read++;
    }
  }
}

void analyze_hand(void) {
  // 初始化分析结果
  straight = true;
  // 是否同花
  flush = true;
  four = false;
  three = false;
  pairs = 0;

  // 同花
  for (int i = 1; i < CARDS_NUM; i++) {
    if (hand[i][1] != hand[0][1]) {
      flush = false;
    }
  }
  // 对rank进行排序
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

  for (int i = 0; i < CARDS_NUM; i++) {
    int rank = 1;
    for (int j = i + 1; j < CARDS_NUM; j++) {
      if (hand_ranks[j] == hand_ranks[i]) {
        rank++;
      } else {
        break;
      }
    }
    if (rank == 2) {
      pairs++;
    } else if (rank == 3) {
      three = true;
    } else if (rank == 4) {
      four = true;
    }
    while (i < CARDS_NUM - 1 && hand_ranks[i] == hand_ranks[i + 1]) {
      i += 1;
    }
  }

  // straight
  for (int i = 0; i < CARDS_NUM - 1; i++) {
    if (hand_ranks[i + 1] - hand_ranks[i] != 1) {
      straight = false;
      break;
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