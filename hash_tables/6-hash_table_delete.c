#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table.
* @ht: The hash table to be deleted.
*
* Description: Frees all memory used by the hash table, including the memory
* used by each node in the array and the array itself.
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *temp;

if (ht == NULL)
{
return; /* If the hash table is NULL, do nothing */
}

/* Iterate over each index in the array */
for (i = 0; i < ht->size; ++i)
{
node = ht->array[i];

/* Free each node in the linked list */
while (node != NULL)
{
temp = node;
node = node->next;

free(temp->key); /* Assuming the key was dynamically allocated */
free(temp->value); /* Assuming the value was dynamically allocated */
free(temp); /* Free the node itself */
}
}

/* Free the array of the hash table */
free(ht->array);

/* Finally, free the hash table structure */
free(ht);
}
