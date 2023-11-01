#include "main.h"

/**
 * check_prime - Checks if a number is prime.
 * @n: The number to check.
 * @i: The current divisor being checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
