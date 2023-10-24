#include "main.h"

/**
 * _atoi - Converts a string to an integer, taking into account
 *        + and - signs preceding the number.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int res = 0;  /* Resultant integer */
	int sign = 1;  /* Sign of integer: 1 or -1 */
	int started = 0;  /* Flag to track if we've started processing numbers */

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;  /* Set flag to true */
			res = (res * 10) + sign * (*s - '0');
		}
		else if (started)
		{
			/*
			 * Break loop if we've started processing numbers 
			 * and encounter a non-number character 
			 */
			break;
		}
		s++;
	}
	
	return (res);
}
