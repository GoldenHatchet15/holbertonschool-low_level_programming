#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, 
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
    int count = 10;
    char c;

    while (count > 0)
    {
        for (c = 'a'; c <= 'z'; c++)
        {
            _putchar(c);
        }
        _putchar('\n');
        count--;
    }
}
