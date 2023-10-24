#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Return: void.
 */
void print_rev(char *s)
{
int len = 0;

/* Calculate the length of the string */
while (s[len])
{
len++;
}

/* Print characters in reverse */
for (int i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}

 _putchar('\n');
}
