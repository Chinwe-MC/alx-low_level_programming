#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *free_grid - function to free 2dimensiona; grid
 *@grid: argument
 *@height: argument
 *Return: Always 0 (Success)
 */




void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

