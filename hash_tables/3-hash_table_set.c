#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table.
* @ht: The hash table to add or update the key/value pair.
* @key: The key, which cannot be an empty string.
* @value: The value associated with the key, which will be duplicated.
*
* Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
unsigned long int index;

/* Check for a valid hash table, key, and non-empty key */
if (!ht || !key || strlen(key) == 0)
return (0);

/* Compute the index for the key */
index = key_index((const unsigned char *)key, ht->size);

/* Check for collision - if there's already a node at index */
for (hash_node_t *current_node = ht->array[index]; current_node != NULL; current_node = current_node->next) {
if (strcmp(current_node->key, key) == 0) {
/* Key exists, update the value */
free(current_node->value); /* Free the old value */
current_node->value = strdup(value); /* Duplicate and assign new value */
if (!current_node->value)
return (0);
return (1);
}
}

/* Create a new node */
new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return (0);

new_node->key = strdup(key);
if (!new_node->key) {
free(new_node);
return (0);
}

new_node->value = strdup(value);
if (!new_node->value) {
free(new_node->key);
free(new_node);
return (0);
}

/* Insert the new node at the beginning of the list at the computed index */
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
