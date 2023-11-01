#include "main.h"

/**
 * is_square_root - Tests if a number is a square root of another number.
 * @n: The number.
 * @i: The test value.
 *
 * Return: Natural square root or -1 if none exists.
 */
int is_square_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (is_square_root(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number.
 *
 * Return: Natural square root or -1 if none exists.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (is_square_root(n, 0));
}
