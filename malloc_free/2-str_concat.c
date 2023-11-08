#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly allocated space in memory containing
 * the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j, len1, len2;

	/* Treat NULL inputs as empty strings */
	len1 = s1 ? 0 : -1;
	while (s1 && s1[++len1])
		;
	len2 = s2 ? 0 : -1;
	while (s2 && s2[++len2])
		;

	/* Allocate memory for the concatenated string */
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	/* Copy the first string into the new memory */
	for (i = 0; s1 && s1[i]; i++)
		concat_str[i] = s1[i];

	/* Concatenate the second string */
	for (j = 0; s2 && s2[j]; j++)
		concat_str[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concat_str[i + j] = '\0';

	return (concat_str);
}
