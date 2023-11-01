#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string whose length we want to find.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
  /* Base case: if we're at the end of the string, return 0 */
    if (*s == '\0')
        return 0;
    
    /* Recursion: move to the next character and add 1 for the current character */ 
    return 1 + _strlen_recursion(s + 1);
}
