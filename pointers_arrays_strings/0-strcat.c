#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	/* Move the pointer to the end of dest string */
	while (*temp != '\0')
	{
		temp++;
	}

	/* Append characters of src to dest */
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}

	/* Append null byte at the end */
	*temp = '\0';

	return (dest);
}
