#include "main.h"
/**
 * alloc_grid - function does some behavior
 * @width: int
 * @height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL || width <= 0 || height <= 0)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i--)
			{
				free(arr[i]);
			}
			free(arr[i]);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
