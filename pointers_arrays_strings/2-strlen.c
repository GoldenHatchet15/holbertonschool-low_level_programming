#include "main.h"
#include <stddef.h>  /* For the NULL macro */

/**
 * _strlen - Returns the length of a string.
 * @s: The pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;  /* Initialize a counter for the string length */

/* Ensure the string pointer is not null */
if (s == NULL)
{
return 0;  /* Return 0 length for a null string pointer */
}

/* Iterate over each character in the string, counting up until the null terminator */
while (s[length] != '\0')
{
length++;
}

return length;  /* Return the counted length */
}
