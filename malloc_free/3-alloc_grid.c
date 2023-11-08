#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointr to 2D array, NULL on failure or if wdth or hght is 0 or (-)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check if width or height is invalid */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the array of pointers to int */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if allocation fails */
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		/* Initialize each int in the row to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
