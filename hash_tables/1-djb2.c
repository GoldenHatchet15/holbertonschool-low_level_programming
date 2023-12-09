#include "hash_tables.h"

/**
* hash_djb2 - Implements the djb2 algorithm.
* @str: Pointer to the string to be hashed.
*
* This function calculates a hash for a given string using the djb2 algorithm,
* which is a fast, simple, and effective hashing algorithm.
*
* Return: The calculated hash.
*/

/* djb2 hash function */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int c;

while ((c = *str++))
{
/* Corrected: Added spaces around '+' operator */
hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
}

return (hash);
}

