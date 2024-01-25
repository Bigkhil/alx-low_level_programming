#include "main.h"
/**
 * free_grid - function does some behavior
 * @grid: int
 * @height: int
 * Return: int
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
