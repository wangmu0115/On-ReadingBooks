#include <stdio.h>

int main()
{
    int d;
    int f1, f2, f3, f4, f5;
    int s1, s2, s3, s4, s5;
    printf("Enter the first 11 digit of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &f1, &f2, &f3, &f4, &f5, &s1, &s2, &s3, &s4, &s5);

    int first_sum = d + f2 + f4 + s1 + s3 + s5;
    int second_sum = f1 + f3 + f5 + s2 + s4;
    int checkDigit = 9 - (first_sum * 3 + second_sum - 1) % 10;
    printf("Check digit: %d\n", checkDigit);

    return 0;
}