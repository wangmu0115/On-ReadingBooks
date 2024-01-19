#include <stdio.h>

// 学生数量
#define NUM_STUDENT 5
// 学科数量
#define NUM_SUBJECT 5

int main(void) {
  double scores[NUM_STUDENT][NUM_SUBJECT] = {0.0};
  double row_total[NUM_STUDENT] = {0.0};
  double col_total[NUM_SUBJECT] = {0.0};
  double col_max[NUM_SUBJECT] = {0.0};
  double col_min[NUM_SUBJECT] = {0.0};

  for (int i = 0; i < NUM_STUDENT; i++) {
    printf("Enter student %d scores: ", i);
    for (int j = 0; j < NUM_SUBJECT; j++) {
      scanf("%lf", &scores[i][j]);
    }
  }

  for (int i = 0; i < NUM_STUDENT; i++) {
    for (int j = 0; j < NUM_SUBJECT; j++) {
      row_total[i] += scores[i][j];
      col_total[j] += scores[i][j];
      col_max[j] = col_max[j] > scores[i][j] ? col_max[j] : scores[i][j];
      col_min[j] = (col_min[j] == 0 || col_min[j] > scores[i][j]) ? scores[i][j]
                                                                  : col_min[j];
    }
  }
  printf("Student   Total    Avg\n");
  for (int i = 0; i < NUM_STUDENT; i++) {
    printf("%4d\t%6.2lf\t%6.2lf\n", i, row_total[i],
           row_total[i] / NUM_STUDENT);
  }
  printf("\n");
  printf("Subject    AVG     MAX     MIN\n");
  for (int i = 0; i < NUM_SUBJECT; i++) {
    printf("%4d\t%6.2lf\t%6.2lf\t%6.2lf\n", i, col_total[i] / NUM_SUBJECT,
           col_max[i], col_min[i]);
  }
  printf("\n");
}