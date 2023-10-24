#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
int len = 0;
int start, end;
char tmp;

/* Calculate the length of the string */
while (s[len])
{
len++;
}

/* Swap the characters to reverse the string */
for (start = 0, end = len - 1; start < end; start++, end--)
{
tmp = s[start];
s[start] = s[end];
s[end] = tmp;
}
}
