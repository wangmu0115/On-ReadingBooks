#include <stdio.h>

int main()
{
    int enteredNum;
    printf("Enter a two-digit number: ");
    scanf("%d", &enteredNum);
    int tens = enteredNum / 10;
    int ones = enteredNum % 10;
    int result = ones * 10 + tens;
    printf("The reversal is: %02d", result);
    return 0;
}