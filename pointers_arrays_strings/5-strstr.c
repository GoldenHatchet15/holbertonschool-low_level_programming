#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 *         the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h_start, *n_start;

	if (!*needle) /* If needle is an empty string, return haystack */
		return (haystack);

	while (*haystack)
	{
		h_start = haystack;
		n_start = needle;

		while (*haystack && *n_start && *haystack == *n_start)
		{
			haystack++;
			n_start++;
		}

		if (!*n_start) /* If the end of needle is reached */
			return (h_start);

		haystack = h_start + 1;
	}

	return (NULL);
}
