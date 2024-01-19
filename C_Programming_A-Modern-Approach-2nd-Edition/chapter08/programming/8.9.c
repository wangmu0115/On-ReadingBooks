#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // 初始化
  char grid[10][10];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      grid[i][j] = '.';
    }
  }
  // 初始化随机数器
  srand((unsigned int)time(NULL));
  // 初始化A的位置
  int x = rand() % 10;
  int y = rand() % 10;
  grid[x][y] = 'A';
  for (char ch = 'B'; ch <= 'Z'; ch += 1) {
    bool movingIsValid = false;
    bool movingDirection[4] = {false};
    bool allDirectionIsTried = false;
    while (!allDirectionIsTried) {
      // 0=上, 1=右, 2=下, 3=左
      int direction = rand() % 4;
      if (movingDirection[direction]) {
        continue;
      } else {
        movingDirection[direction] = true;
      }
      int new_x = x, new_y = y;
      switch (direction) {
        case 0:
          new_x = x - 1;
          movingIsValid = ((x - 1) >= 0) && (grid[x - 1][y] == '.');
          break;
        case 1:
          new_y = y + 1;
          movingIsValid = ((y + 1) < 10) && (grid[x][y + 1] == '.');
          break;
        case 2:
          new_x = x + 1;
          movingIsValid = ((x + 1) < 10) && (grid[x + 1][y] == '.');
          break;
        case 3:
          new_y = y - 1;
          movingIsValid = ((y - 1) >= 0) && (grid[x][y - 1] == '.');
          break;
        default:
          break;
      }
      if (movingIsValid) {
        x = new_x;
        y = new_y;
        grid[x][y] = ch;
        break;
      }
      allDirectionIsTried = movingDirection[0] && movingDirection[1] &&
                            movingDirection[2] && movingDirection[3];
    }
    if (!movingIsValid) {
      break;
    }
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf(" %c ", grid[i][j]);
    }
    printf("\n");
  }
}