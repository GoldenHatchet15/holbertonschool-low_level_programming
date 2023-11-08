#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string or NULL
 * @s2: the second string or NULL
 *
 * Return: a pointer to a new allocated space in memory containing
 * the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j;
	int len1 = 0, len2 = 0;

	/* Calculate the length of s1 if it's not NULL */
	if (s1)
	{
		while (s1[len1])
			len1++;
	}

	/* Calculate the length of s2 if it's not NULL */
	if (s2)
	{
		while (s2[len2])
			len2++;
	}

	/* Allocate memory for concatenated string including the null terminator */
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (!concat_str)
		return (NULL);

	/* Copy s1 into the new memory, treat NULL as empty string */
	for (i = 0; s1 && s1[i]; i++)
		concat_str[i] = s1[i];

	/* Concatenate s2, treat NULL as empty string */
	for (j = 0; s2 && s2[j]; j++)
		concat_str[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concat_str[i + j] = '\0';

	return (concat_str);
}
