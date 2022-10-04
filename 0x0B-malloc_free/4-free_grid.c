#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimentional grid
 * @**grid: pointer
 * @height: int var
 * Return: no return type
 */
void free_grid(int **grid, int height)
{
	free(*grid);
}
