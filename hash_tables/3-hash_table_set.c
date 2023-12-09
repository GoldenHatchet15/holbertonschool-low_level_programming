#include "hash_tables.h"

/* Prototype for helper function */
static void free_node(hash_node_t *node);

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
hash_node_t *new_node, *current_node;
unsigned long int index;

if (!ht || !key || strlen(key) == 0)
return ((0));

index = key_index((const unsigned char *)key, ht->size);

current_node = ht->array[index];
while (current_node)

{
if (strcmp(current_node->key, key) == 0)

{
free(current_node->value);
current_node->value = strdup(value);
return ((current_node->value != NULL));
}
current_node = current_node->next;
}

new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return ((0));

new_node->key = strdup(key);
if (!new_node->key)

{
free_node(new_node);
return (0);
}

new_node->value = strdup(value);
if (!new_node->value)

{
free_node(new_node);
return (0);
}

new_node->next = ht->array[index];
ht->array[index] = new_node;

return ((1));
}

/**
* free_node - Frees a node's memory.
* @node: The node to be freed.
*/
static void free_node(hash_node_t *node)

{
if (node)

{
free(node->key);
free(node->value);
free(node);
}
}

