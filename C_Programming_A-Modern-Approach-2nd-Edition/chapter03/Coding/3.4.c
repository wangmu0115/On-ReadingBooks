#include <stdio.h>

int main()
{
    int phoneCode1, phoneCode2, phoneCode3;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &phoneCode1, &phoneCode2, &phoneCode3);
    printf("Your entered %03d.%03d.%04d\n", phoneCode1, phoneCode2, phoneCode3);
    return 0;
}