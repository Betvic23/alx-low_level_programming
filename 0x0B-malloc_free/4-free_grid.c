#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free a used memory
 * @grid: memory to free
 * @height: array memory
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
