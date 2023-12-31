#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: prefix substring.
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *orig_accept = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
			accept++;
		}

		if (!*accept)  /* End of 'accept' without match */
		{
			return (count);
		}
		accept = orig_accept;  /* Reset accept pointer */
		s++;
	}

	return (count);
}
