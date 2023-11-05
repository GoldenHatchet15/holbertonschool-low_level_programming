#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: The number of command line arguments
 * @argv: Array containing the program command line arguments
 *
 * Return: 0 - Success
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Unused parameter */

	if (argv[0])
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
