#include <stdio.h>

int main()
{
    int item;
    float price;
    int day, month, year;
    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\t\tPurchase\n");
    printf("\tPrice\t\tDate\n");
    printf("%d\t$%7.2f\t%02d/%02d/%04d\n", item, price, month, day, year);

    return 0;
}