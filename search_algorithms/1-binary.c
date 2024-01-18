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



/**
* binary_search - Searches for a value in a sorted array of integers
* using the Binary search algorithm.
* @array: A pointer to the first element of the array to search in
* @size: The number of elements in the array
* @value: The value to search for
*
* Return: The index where value is located, or -1 if not present or array is NULL
*/
int binary_search(int *array, size_t size, int value)
{
size_t left, right, mid;

if (array == NULL)
return (-1);

left = 0;
right = size - 1;

while (left <= right)
{
print_array(array, left, right);
mid = left + (right - left) / 2;

if (array[mid] == value)
return ((int)mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}
