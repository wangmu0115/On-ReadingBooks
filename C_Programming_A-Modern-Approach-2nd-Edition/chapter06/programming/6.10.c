#include <stdio.h>

int main(void) {
  int day, month, year;
  int earliest_day = 0, earliest_month = 0, earliest_year = 0;
  for (;;) {
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    if (day == 0 && month == 0 && year == 0) {
      break;
    }
    if ((earliest_day == 0 && earliest_month == 0 && earliest_year == 0) ||
        ((year * 365 + month * 30 + day) <
         (earliest_year * 365 + earliest_month * 30 + earliest_day))) {
      earliest_year = year;
      earliest_month = month;
      earliest_day = day;
    }
  }
  printf("%d/%d/%02d is the earliest date.\n", earliest_month, earliest_day,
         earliest_year);
  return 0;
}