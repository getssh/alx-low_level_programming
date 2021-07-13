#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function
 *
 * @grid: double pointer
 * @height: another value
 * Return: noting
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
