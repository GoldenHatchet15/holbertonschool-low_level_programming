#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
      int start = 0, end = n - 1;
      int temp;

    while (start < end)
    {
        // Swap the elements
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}
