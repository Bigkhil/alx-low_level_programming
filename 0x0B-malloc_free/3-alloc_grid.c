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
	int i, j, **arr, **temp1, **temp2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(sizeof(int) * width);
	temp1 = temp2 = arr;
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < width ; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * height);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0 ; i < width ; i++)
	{
		for (j = 0 ; j < height ; j++)
		{
			temp1[i][j] = 0;
		}
	}
	return (temp2);
}
