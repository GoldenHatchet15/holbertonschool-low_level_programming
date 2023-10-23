#include "main.h"

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

if (a == NULL || b == NULL)  // It's always good practice to check if the pointers are not null before dereferencing
return;

temp = *a;  // Store the value of 'a' in 'temp'
*a = *b;    // Assign the value of 'b' to 'a'
*b = temp;  // Assign the value stored in 'temp' (original value of 'a') to 'b'
}
