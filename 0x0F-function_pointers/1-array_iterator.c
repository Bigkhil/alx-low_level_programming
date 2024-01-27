#include "function_pointers.h"
/**
 * array_iterator - function does some behavior
 * @array: string
 * @size: size_t
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	int i;

	if (array && size && action)
	{
		for (i = 0 ; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
