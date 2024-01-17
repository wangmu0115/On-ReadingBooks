#include <stdio.h>

int main(void) {
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");

  // 读取数字后，将其他字符消耗掉，直到遇到回车符
  scanf("%d", &n);
  while (getchar() != '\n')
    ;

  for (i = 1; i <= n; i++) {
    printf("%10d%10d\n", i, i * i);
    if (i % 24 == 0) {
      printf("Please Enter to continue...\n");
      while (getchar() != '\n')
        ;
    }
  }
  return 0;
}