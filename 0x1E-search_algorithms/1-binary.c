#include "search_algos.h"
/**
 * binary_search - function to search for an integer in an array
 * @array: pointer to the first element of the array
 * @size: the length of the array
 * @value: the value of the integer to search for
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, r = size - 1, mid;

	if (array == NULL)
		return (-1);
	while(l <= r)
	{
		mid = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (value > array[mid])
			l = mid + 1;
		else if (value < array[mid])
			r = mid - 1;
		else
		{
			printf("Found %d at index: %ld\n", value, mid);
			return (mid);
		}
	}
	return (-1);
}
