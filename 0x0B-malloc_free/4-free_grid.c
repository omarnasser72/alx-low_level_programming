#include "main.h"

/**
 * free_grid - check for char
 * @grid: parameter
 * @height: parameter
 * Return: on success 1.
 *
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height ; i++)
		free(grid[i]);
	free(grid);
}
