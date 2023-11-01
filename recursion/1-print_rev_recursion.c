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

int main(void)
{
	char str[] = "This is a reverse string";
	_print_rev_recursion(str);
	printf("\n");	/* Print a newline after the reversed string */
	return(0);
}
