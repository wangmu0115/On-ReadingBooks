#include <stdio.h>
#include <stdlib.h>

int minutes_to_0000(hour, minute) { return hour * 60 + minute; }

int main(void) {
  int departures[] = {minutes_to_0000(8, 0),   minutes_to_0000(9, 43),
                      minutes_to_0000(11, 19), minutes_to_0000(12, 47),
                      minutes_to_0000(14, 0),  minutes_to_0000(15, 45),
                      minutes_to_0000(19, 0),  minutes_to_0000(21, 45)};
  int arrivings[] = {minutes_to_0000(10, 16), minutes_to_0000(11, 52),
                     minutes_to_0000(13, 31), minutes_to_0000(15, 0),
                     minutes_to_0000(16, 8),  minutes_to_0000(17, 55),
                     minutes_to_0000(21, 20), minutes_to_0000(23, 58)};

  int hour, minute;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);
  int minutes = minutes_to_0000(hour, minute);

  int planeCnt = sizeof(departures) / sizeof(departures[0]);
  int planeIdx = 0;
  int minAbsCloseMinutes = abs(minutes - departures[0]);
  for (int i = 1; i < planeCnt; i++) {
    int closeMinutes = abs(minutes - departures[i]);
    if (closeMinutes < minAbsCloseMinutes) {
      minAbsCloseMinutes = closeMinutes;
      planeIdx = i;
    }
  }
  int departureHour = departures[planeIdx] / 60;
  int departureMinute = departures[planeIdx] % 60;
  int arrivingHoure = arrivings[planeIdx] / 60;
  int arrivingMinute = arrivings[planeIdx] % 60;

  if (departureHour <= 11) {
    printf("Closest departure time is %02d:%02d a.m.", departureHour,
           departureMinute);
  } else if (departureHour == 12) {
    printf("Closest departure time is 12:%02d p.m.", departureMinute);
  } else {
    printf("Closest departure time is %02d:%02d p.m.", departureHour % 12,
           departureMinute);
  }

  if (arrivingHoure <= 11) {
    printf(", arriving at %02d:%02d a.m.\n", arrivingHoure, arrivingMinute);
  } else if (arrivingHoure == 12) {
    printf(", arriving at 12:%02d p.m.\n", arrivingMinute);
  } else {
    printf(", arriving at %02d:%02d p.m.\n", arrivingHoure % 12,
           arrivingMinute);
  }
  return 0;
}