#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be printed.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* Base case: If the current character is a null terminator, return */
	if (*s == '\0')
	{
		return;
	}
	/* Recursively move to the next character */
	_print_rev_recursion(s + 1);
	/* Print the current character on the way back up */
	printf("%c", *s);
}
