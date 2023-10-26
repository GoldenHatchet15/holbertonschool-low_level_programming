#include "main.h"

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to be checked.
 *
 * Return: 1 if character is a separator, otherwise 0.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	/* Capitalize the first character if it is lowercase */
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 'a' + 'A';
	}

	/* Iterate through the string */
	for (i = 1; s[i]; i++)
	{
		/* If the character is lowercase and is preceded by a separator */
		if (s[i] >= 'a' && s[i] <= 'z' && is_separator(s[i - 1]))
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}

	return (s);
}
