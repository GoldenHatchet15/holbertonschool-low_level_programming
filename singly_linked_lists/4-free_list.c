#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list_t list.
 *
 * Description: Frees each node in the list and the strings they contain.
 *              It traverses the list safely, ensuring no memory leaks.
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head->next;  /* Save the reference to the next node */

        free(head->str);    /* Free the string in the current node */
        free(head);         /* Free the current node */

        head = temp;        /* Move to the next node */
    }
}
