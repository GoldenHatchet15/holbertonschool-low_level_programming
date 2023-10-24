#include "main.h"
#include <stddef.h> /* For the NULL macro */

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length is to be found.
 *
 * Return: Length of the string, or 0 if string is NULL.
 */
int _strlen(char *s)
{
int length = 0;

if (s == NULL)
return (0);

while (s[length] != '\0')
length++;
return (length);
}
