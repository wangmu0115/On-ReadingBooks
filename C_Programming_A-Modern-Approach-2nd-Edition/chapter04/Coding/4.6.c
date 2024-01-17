#include <stdio.h>

int main()
{
    int f1, f2, f3, f4, f5, f6;
    int s1, s2, s3, s4, s5, s6;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &f1, &s1, &f2, &s2, &f3, &s3, &f4, &s4, &f5, &s5, &f6, &s6);
    int sum_1 = s1 + s2 + s3 + s4 + s5 + s6;
    int sum_2 = f1 + f2 + f3 + f4 + f5 + f6;

    int checkDigit = 9 - (3 * sum_1 + sum_2 - 1) % 10;
    printf("Check digit: %1d\n", checkDigit);

    return 0;
}