#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be modified.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char original[] = "aeotlAEOTL";
	char encoded[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = encoded[j];
				break;  /* Exit the inner loop once a replacement is made */
			}
		}
	}

	return (s;)
}
