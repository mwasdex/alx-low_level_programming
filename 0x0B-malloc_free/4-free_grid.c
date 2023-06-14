#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid/array
 * @grid: pointer to a grid
 * @height: number of rows in grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}
