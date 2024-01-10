#include <stdio.h>

int main()
{
    // ····86,1000
    printf("|%6d,%4d|\n", 86, 1000);
    // ·3.02530e+01
    printf("|%12.5e|\n", 30.253);
    // 83.1620
    printf("|%.4f|\n", 83.162);
    // 1e-06·
    printf("|%-6.2g|\n", .0000009979);
    return 0;
}