#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase, 
 * followed by a new line
 */
void print_alphabet_x10(void)
{
    int count = 0;
    char c;

    while (count < 10)
    {
        while (c = 'a'; c <= 'z'; c++)
        {
            _putchar(c);
        }
        _putchar('\n');
        count++;
    }
}
