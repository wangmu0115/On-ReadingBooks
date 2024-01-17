#include <stdio.h>

int main() {
  int day, month, year;
  printf("Enter date(mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("Dated this %d", day);
  switch (day) {
    case 1:
    case 21:
    case 31:
      printf("st");
      break;
    case 2:
    case 22:
      printf("nd");
      break;
    case 3:
    case 23:
      printf("rd");
      break;
    default:
      printf("th");
      break;
  }
  printf(" day of ");
  switch (month) {
    case 1:
      printf("January");
      break;
    case 2:
      printf("February");
      break;
    case 3:
      printf("March");
    case 4:
      printf("April");
    case 5:
      printf("May");
    case 6:
      printf("June");
    case 7:
      printf("July");
    case 8:
      printf("August");
    case 9:
      printf("September");
      break;
    case 10:
      printf("October");
      break;
    case 11:
      printf("November");
      break;
    case 12:
      printf("December");
      break;
  }
  printf(", 20%02d\n", year);
  return 0;
}