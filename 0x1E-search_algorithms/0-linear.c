#include "search_algos.h"
/**
 * linear_search - function to search for an integer in an array
 * @array: pointer to the first element of the array
 * @size: the length of the array
 * @value: the value of the integer to search for
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
