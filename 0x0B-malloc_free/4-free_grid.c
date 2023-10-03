#include "main.h"

/**
 * free_grid -  frees a two dimensional grid previously created
 * @grid: pointer to array
 * @height: number of rows
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
