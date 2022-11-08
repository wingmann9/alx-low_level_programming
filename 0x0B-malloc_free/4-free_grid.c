#include "main.h"

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: 2-dimensional array of integers to be freed.
 * @height: Height of grid.
 *
 * Return: Void.
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);

	free(grid);
}
