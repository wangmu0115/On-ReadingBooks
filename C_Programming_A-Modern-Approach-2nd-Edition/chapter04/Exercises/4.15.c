#include <stdio.h>

int main()
{
    int i = 1, j = 2;
    // i = 3, j = 2
    i += j;
    printf("i = %d, j = %d\n", i, j);
    // i = 2, j = 2
    i--;
    printf("i = %d, j = %d\n", i, j);
    // result = 2
    // i = 2, j = 2
    printf("result = %d\n", i * j / i);
    printf("i = %d, j = %d\n", i, j);
    // result = 2
    // i = 2, j = 3
    printf("result = %d\n", i % ++j);
    printf("i = %d, j = %d\n", i, j);
}