#include <stdio.h>

int main()
{
    int i;
    float f;

    i = 42;
    f = 843.28f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", f, f, f);
    return 0;
}