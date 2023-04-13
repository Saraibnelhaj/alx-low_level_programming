#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - Function that frees a 2 D grid previously created by alloc_grid
*@grid: Pointer to the grid to free
*@height: height of the grid
*
*Return: Nothing
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

