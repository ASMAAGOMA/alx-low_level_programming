#include <stdlib.h>

/**
 * free_grid - that frees a 2 dimensional grid
 * @grid: the 2 dimensional grid to be freed
 * @height: the rows number
 * Return: return
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
