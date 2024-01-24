#include "main.h"
/**
 * alloc_grid - function does some behavior
 *
 * @width: int
 * @height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr, *x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(int) * width * height);
	if (x == NULL)
	{
		return (NULL);
	}
	arr = &x;
	for (i = 0 ; i < width ; i++)
	{
		for (j = 0 ; j < height ; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
