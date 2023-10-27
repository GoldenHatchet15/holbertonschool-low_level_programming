#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed by s with byte b
 * @s: memory area to be filled
 * @b: byte to fill with
 * @n: number of bytes to fill
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s;
}
