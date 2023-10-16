#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the lowercase alphabet
 * followed by a newline, using only putchar twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}

  
