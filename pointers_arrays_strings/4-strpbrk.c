#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *orig_accept = accept;

	while (*s)
	{
		accept = orig_accept;
		while (*accept)
		{
			if (*s == *accept)
				return (s);  /* return pointer to the byte in s that matches */
			accept++;
		}
		s++;
	}

	return (NULL);
}
