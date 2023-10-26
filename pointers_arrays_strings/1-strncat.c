#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 0;

	/* Move the pointer to the end of dest string */
	while (*temp != '\0')
	{
		temp++;
	}

	/* Append characters of src to dest up to n bytes or until src ends */
	while (i < n && *src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
		i++;
	}

	/* Append null byte at the end if n bytes are not exhausted */
	if (i < n)
	{
		*temp = '\0';
	}

	return (dest);
}
