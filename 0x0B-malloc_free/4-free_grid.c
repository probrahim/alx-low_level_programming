#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up a 2d grid
 * @grid: double pointer 2d grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

    i = 0;
    while (i < height)
    {
        free(grid[i]);
        i++;
    }
	free(grid);
}
