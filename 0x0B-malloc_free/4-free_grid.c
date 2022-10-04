#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated for array
 * @grid: arrat
 * @height: height of array
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
