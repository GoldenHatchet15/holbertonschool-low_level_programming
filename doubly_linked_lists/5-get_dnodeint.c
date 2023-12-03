#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node of dlistint_t linkd list, or NULL if the node doesnt exst
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);

count++;
current = current->next;
}

return (NULL); /* If the node does not exist */
}
