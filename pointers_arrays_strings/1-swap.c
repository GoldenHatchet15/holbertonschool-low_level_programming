#include "main.h"
#include <stddef.h>  /* For NULL */

/**
 * swap_int - Swaps the values of two integers.
 * @a: The pointer to an integer.
 * @b: The pointer to another integer.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
    int temp;

    if (a == NULL || b == NULL)  /* Check if the pointers are not null */
        return;

    temp = *a;  /* Store the value of 'a' in 'temp' */
    *a = *b;    /* Assign the value of 'b' to 'a' */
    *b = temp;  /* Assign the stored value in 'temp' to 'b' */
}
