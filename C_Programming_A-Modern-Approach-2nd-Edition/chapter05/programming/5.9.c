#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int year1, month1, day1;
  int year2, month2, day2;

  printf("Enter first date(mm/dd/yy): ");
  scanf("%d/%d/%d", &month1, &day1, &year1);
  printf("Enter second date(mm/dd/yy): ");
  scanf("%d/%d/%d", &month2, &day2, &year2);
  if (year1 == year2 && month1 == month2 && day1 == day2) {
    printf("Same date(mm/dd/yy): %02d/%02d/%02d\n", month1, day1, year1);
  } else {
    bool date1IsBigThenDate2 = false;
    if (year1 > year2) {
      date1IsBigThenDate2 = true;
    } else if (year1 == year2) {
      if (month1 > month2) {
        date1IsBigThenDate2 = true;
      } else if (month1 == month2) {
        if (day1 > day2) {
          date1IsBigThenDate2 = true;
        }
      }
    }
    if (date1IsBigThenDate2) {
      printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", month2, day2,
             year2, month1, day1, year1);
    } else {
      printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", month1, day1,
             year1, month2, day2, year2);
    }
  }

  return 0;
}