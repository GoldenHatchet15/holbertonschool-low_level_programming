#include <stdio.h>
#include "hash_tables.h" /* Include the header file for hash table structure */

/**
* hash_table_print - Prints a hash table.
* @ht: The hash table to be printed.
*
* Description: Prints the key/value pairs in the hash table in the order
* they appear in the array of the hash table. The format for each pair
* is "'key': 'value'". If ht is NULL, nothing is printed.
* The function iterates over the array and the linked lists at each
* index of the array, printing the key/value pairs found.
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i; /* Declaration of loop counter */
int comma_flag; /* Flag to manage comma printing */
hash_node_t *node; /* Pointer to node in hash table */

if (ht == NULL)
{
return; /* If the hash table is NULL, do nothing */
}

comma_flag = 0; /* Initialize flag to manage comma printing */
printf("{");

for (i = 0; i < ht->size; ++i)
{
node = ht->array[i]; /* Get list at this index of hash table */

while (node != NULL)
{
if (comma_flag)
{
printf(", ");
}

printf("'%s': '%s'", node->key, node->value); /* Print the key/value pair */
comma_flag = 1; /* Set the flag after printing at least one pair */

node = node->next; /* Move to the next node in the list */
}
}

printf("}\n");
}
