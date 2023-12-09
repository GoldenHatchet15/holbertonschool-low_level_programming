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
hash = ((hash << 5)+hash)+c;/* hash * 33 + c*/
}

return (hash);
}

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the array in the hash table.
 *
 * This function initializes a new hash table with a given size. It allocates
 * memory for the hash table structure and sets up the internal array used for
 * storing the data.
 *
 * Return: A pointer to the newly created hash table, or NULL if memory allocation fails.
 */

/* Function to create a hash table */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_table;
unsigned long int i;

new_table = malloc(sizeof(hash_table_t));
if (new_table == NULL)
return (NULL);

new_table->array = malloc(sizeof(hash_node_t *) * size);
if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}

for (i = 0; i < size; i++)
new_table->array[i] = NULL;

new_table->size = size;
return (new_table);
}
