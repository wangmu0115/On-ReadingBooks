#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Please enter a three-digit number: ");
    scanf("%1d%1d%1d", &n1, &n2, &n3);
    printf("The reversal is: %1d%1d%1d", n3, n2, n1);
    return 0;
}