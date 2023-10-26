#include "main.h"

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to be copied from src.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copy characters from src to dest until n is exhausted or src ends */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* If src ends before n characters, fill dest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
