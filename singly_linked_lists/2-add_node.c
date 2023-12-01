#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: A double pointer to the head of the list_t list
 * @str: The string to be added to the list
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *dup_str;

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* Duplicate the string */
dup_str = strdup(str);
if (dup_str == NULL)
{
free(new_node);
return (NULL);
}

/* Initialize the new node */
new_node->str = dup_str;
new_node->len = strlen(str);
new_node->next = *head;

/* Set the new node as the new head of the list */
*head = new_node;

return (new_node);
}
