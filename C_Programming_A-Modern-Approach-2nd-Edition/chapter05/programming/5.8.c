#include <stdio.h>

int main(void) {
  int hour, minute;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  int minutes_to_0000 = hour * 60 + minute;

  if (minutes_to_0000 < (8 * 60 + ((9 - 8) * 60 + 43) / 2)) {
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 p.m.");
  } else if (minutes_to_0000 <
             (9 * 60 + 43 + ((11 - 9) * 60 + (19 - 43)) / 2)) {
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 p.m.");
  } else if (minutes_to_0000 <
             (11 * 60 + 19 + ((12 - 11) * 60 + (47 - 19)) / 2)) {
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
  } else if (minutes_to_0000 <
             (12 * 60 + 47 + ((14 - 12) * 60 + (0 - 47)) / 2)) {
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
  } else if (minutes_to_0000 <
             (14 * 60 + 0 + ((15 - 14) * 60 + (45 - 0)) / 2)) {
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
  } else if (minutes_to_0000 <
             (15 * 60 + 45 + ((19 - 15) * 60 + (0 - 45)) / 2)) {
    printf("Closest departure time is 3:45 a.m., arriving at 5:55 p.m.");
  } else if (minutes_to_0000 <
             (19 * 60 + 0 + ((21 - 19) * 60 + (45 - 0)) / 2)) {
    printf("Closest departure time is 7:00 a.m., arriving at 9:20 p.m.");
  } else {
    printf("Closest departure time is 9:45 a.m., arriving at 11:58 p.m.");
  }
  printf("\n");
  return 0;
}