#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Calls a function given as a pointer, passing name as argument
 * @name: The name to be passed to the function
 * @f: Pointer to the function that takes a char* and returns void
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

