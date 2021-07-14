#include "holberton.h"
/**
 * free_grid - free dinamically allocated memory
 * @grid: 2d array to be free
 * @height: size of the array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
