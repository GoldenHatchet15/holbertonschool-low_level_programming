#include "main.h"

/**
 * print_putchar - Prints "_putchar" followed by a newline
 */
void print_putchar(void)
{
    char *str = "_putchar\n";
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}
