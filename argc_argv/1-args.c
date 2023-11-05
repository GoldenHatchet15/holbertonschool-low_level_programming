#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 (Always success)
 */
int main(int argc, char **argv)
{
	(void)argv; /* argv is unused, this is to avoid a compiler warning */
	printf("%d\n", argc - 1); /* Print the number of actual arguments */
	return (0);
}
