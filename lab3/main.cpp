#include <stdio.h>
int main()
{
    unsigned int value, value2;

    printf("Enter decimal number: ");
    scanf("%d", &value);
    printf("IN octal: %o\n", value);
    printf("IN hexadecimal: %x\n", value);
    printf("IN hexadecimal: %x\n", value<<2);
    printf("Negative: %x\n", ~value);

    printf("Enter new hexadecimal value without \"0x\": ");
    scanf(" %x", &value2);
    printf("or: %x", value | value2);

    printf("Work finished");
    return 0;
}
