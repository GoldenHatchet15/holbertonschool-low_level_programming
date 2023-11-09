#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string to concatenate up to n bytes
 * @n: the number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the newly allocated space in memory with s1 followed by
 * the first n bytes of s2, null terminated; or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, len1, len2;

	/* Treat NULL pointers as empty strings */
	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;

	/* If n greater >= to the length of s2, use the entire string s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	new_str = malloc(len1 + n + 1); /* +1 for the null terminator */
	if (new_str == NULL)
		return (NULL);

	/* Copy s1 into the new string */
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	/* Concatenate up to n bytes of s2 */
	for (j = 0; j < n; i++, j++)
		new_str[i] = s2[j];

	/* Null terminate the new string */
	new_str[i] = '\0';

	return (new_str);
}
