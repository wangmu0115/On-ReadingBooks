#include <stdio.h>

int main() {
  float windSpeed;
  printf("Enter the wind speed(nautical miles/hour): ");
  scanf("%f", &windSpeed);

  if (windSpeed < 1.00f) {
    printf("Calm");
  } else if (windSpeed <= 3.00f) {
    printf("Light air");
  } else if (windSpeed <= 27.00f) {
    printf("Breeze");
  } else if (windSpeed <= 47.00f) {
    printf("Gale");
  } else if (windSpeed <= 63.00f) {
    printf("Storm");
  } else {
    printf("Hurricane");
  }
  printf("\n");
  return 0;
}