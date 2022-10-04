#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - function
 * @width: int var
 * @height: int var
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			grid[j][k] = 0;
	}
	return (grid);
}
