#include <stdio.h>

int main()
{
    int numbers[16];
    printf("Enter the numbers from 1 to 16 in any order:\n");
    for (int i = 0; i < 16; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int rowSums[4] = {0, 0, 0, 0};
    int columnSums[4] = {0, 0, 0, 0};
    int diagonalSums[2] = {0, 0};
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            int number = numbers[column + row * 4];
            printf("%2d\t", number);
            rowSums[row] += number;
            columnSums[column] += number;
            if (row == column)
            {
                diagonalSums[0] += number;
            }
            if (row + column == 3)
            {
                diagonalSums[1] += number;
            }
        }
        printf("\n");
    }
    printf("Row sums: %d %d %d %d\n", rowSums[0], rowSums[1], rowSums[2], rowSums[3]);
    printf("Row sums: %d %d %d %d\n", columnSums[0], columnSums[1], columnSums[2], columnSums[3]);
    printf("Diagonal sums: %d %d\n", diagonalSums[0], diagonalSums[1]);
    return 0;
}