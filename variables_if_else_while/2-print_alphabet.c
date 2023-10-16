#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program  prints the alphabet in
 * in lowercase, followed by a new line, using only putchar two times.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c:

    for (c = 'a'; c <= 'z'; c++)
        putchar(c);

    putchar('\n');

    return (0);
}
  
