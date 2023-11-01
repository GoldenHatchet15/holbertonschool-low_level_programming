#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* Base case: If the current character is a null terminator */
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	/* Print the current character */
	printf("%c", *s);
	/* Move to the next character and recurse */
	_puts_recursion(s + 1);
}
