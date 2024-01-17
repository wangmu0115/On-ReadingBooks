#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    int ocatalNum = 0;
    int digit = 1;
    while (num > 0)
    {
        ocatalNum += (num % 8) * digit;

        digit *= 10;
        num /= 8;
    }

    printf("In ocatal, you number is: %05d\n", ocatalNum);
    return 0;
}