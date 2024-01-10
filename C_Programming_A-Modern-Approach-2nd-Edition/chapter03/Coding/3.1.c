#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Enter a data (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %4d%02d%02d\n", year, month, day);
    return 0;
}