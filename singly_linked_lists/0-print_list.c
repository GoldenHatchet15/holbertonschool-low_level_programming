#include "lists.h"
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

node_count++;
h = h->next;
}

return node_count;
}
