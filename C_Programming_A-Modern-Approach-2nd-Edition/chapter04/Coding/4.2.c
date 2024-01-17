#include <stdio.h>

int main()
{
    int enteredNum;
    printf("Please enter a three-digit number: ");
    scanf("%d", &enteredNum);
    int hundreds = enteredNum / 100;
    enteredNum %= 100;
    int tens = enteredNum / 10;
    int ones = enteredNum % 10;
    int result = ones * 100 + tens * 10 + hundreds;
    printf("The reversal is: %03d", result);
    return 0;
}