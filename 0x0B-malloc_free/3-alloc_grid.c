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
	int i, j, **arr, **temp;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(sizeof(int) * width);
	temp = arr;
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < width ; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * height);
	}
	for (i = 0 ; i < width ; i++)
	{
		for (j = 0 ; j < height ; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (temp);
}
