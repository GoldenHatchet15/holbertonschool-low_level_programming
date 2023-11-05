#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: 0 if the program succeeds, 1 if it fails
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;
	/* Check if program received two arguments exctly (and program name) */

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Print the result */
	num1 = atoi(argv[1]);
	/* Calculate the product */
	num2 = atoi(argv[2]);
	product = num1 * num2;

	/* Print the result */
	printf("%d\n", product);
	return (0);
}
