#include "search_algos.h"

/**
* print_array - Prints an array of integers
* @array: The array to be printed
* @left: Left index of the array to print from
* @right: Right index of the array to print to
*/
void print_array(const int *array, size_t left, size_t right)
{
printf("Searching in array: ");
for (; left <= right; left++)
{
printf("%d", array[left]);
if (left < right)
printf(", ");
}
printf("\n");
}
