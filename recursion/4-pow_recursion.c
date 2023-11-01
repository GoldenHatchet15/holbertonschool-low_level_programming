#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: x raised to power y, or -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	/* If y is negative, return -1 */
	if (y < 0)
		return (-1);

	/* Base case: x^0 = 1 */
	if (y == 0)
		return (1);

	/* Recursion: x^y = x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
