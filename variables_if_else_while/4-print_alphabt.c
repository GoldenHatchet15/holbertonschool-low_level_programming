#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char r;

    for (r = 'a'; r <= 'z'; r++)
    {
        if (r != 'q' && r != 'e')
            putchar(r);
    }
    putchar('\n');
    return (0);
}
