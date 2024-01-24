#include "main.h"
/**
 * create_array - update the value of variable to 98
 *
 * @size: number
 * @c: character
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *arr, *temp;

	arr = malloc(sizeof(char) * size);
	temp = arr;
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		arr[i] = c;
	}
	return (temp);
}
