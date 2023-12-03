#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added, starts at 0
 * @n: the integer for the new node to contain
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;

if (idx == 0) /* Add at the beginning */
return (add_dnodeint(h, n));

current = *h;
for (i = 0; current != NULL && i < idx; i++)
current = current->next;

if (current == NULL && i == idx) /* Add at the end */
return (add_dnodeint_end(h, n));
else if (current != NULL)
{
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = current;
new_node->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new_node;
current->prev = new_node;

return (new_node);
}

return (NULL); /* If idx is out of range */
}
