#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (8 * sizeof(n) - 1);

	if (n == 0)
	{
		printf("0");
		return;
	}

	/* Skipping leading zeros */
	while (!(n & mask) && mask)
		mask >>= 1;

	while (mask)
	{
		if (n & mask)
			printf("1");
		else
			printf("0");

		mask >>= 1;
	}
}
