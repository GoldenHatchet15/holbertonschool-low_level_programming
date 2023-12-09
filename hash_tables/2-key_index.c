#include "hash_tables.h"

/**
* key_index - Gives you the index of a key.
* @key: The key to find the index for.
* @size: The size of the array of the hash table.
*
* This function calculates the index at which the key/value pair should be
* stored in the array of the hash table, using the hash_djb2 function.
*
* Return: The index at which the key/value pair should be stored in the array
* of the hash table.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
/* Calculate the hash value using hash_djb2 */
unsigned long int hash_value = hash_djb2(key);

/* Modulate to find the index within the array bounds */
return (hash_value % size);
}
