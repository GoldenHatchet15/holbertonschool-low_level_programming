#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: 
 * If s1 < s2, it returns negative.
 * If s1 is the same as s2, it returns 0.
 * If s1 > s2, it returns positive.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return ((int)(*s1) - (int)(*s2));
}
