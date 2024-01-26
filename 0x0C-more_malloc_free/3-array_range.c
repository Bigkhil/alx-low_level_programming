#include "main.h"
/**
 * array_range - function does some behavior
 * @min: int
 * @max: int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *x, i, temp;

	if (min > max)
	{
		return (NULL);
	}
	temp = min;
	x = malloc(sizeof(int) * (max - min + 1));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < (max - min + 1) ; i++)
	{
		x[i] = temp;
		temp++;
	}
	return (x);
}
