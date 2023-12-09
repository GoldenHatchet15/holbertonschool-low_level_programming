#include "hash_tables.h"

/**
* hash_table_get - Retrieves a value associated with a key in a hash table.
* @ht: The hash table to look into.
* @key: The key to find.
*
* Return: Value associated with element, NULL if the key couldn’t be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)



{
unsigned long int index;
hash_node_t *node;

if (ht == NULL || key == NULL)
return (NULL);

/* Compute the index for the key */
index = key_index((const unsigned char *)key, ht->size);

/* Search the linked list at that index */
for (node = ht->array[index]; node != NULL; node = node->next)

{
if (strcmp(node->key, key) == 0)
return (node->value);  /* Key found, return value */
}

return (NULL);  /* Key not found */
}
