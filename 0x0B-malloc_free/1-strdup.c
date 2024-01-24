#include "main.h"
/**
 * _strdup - function does some behavior
 *
 * @str: number
 * Return: char
 */
char *_strdup(char *str)
{
	char *arr, *temp1, *temp2;
	int i, size;

	size = 1;
	temp1 = str;
	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		size++;
		str++;
	}
	arr = malloc(sizeof(char) * size);
	temp2 = arr;
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++, temp1++)
	{
		arr[i] = *temp1;
	}
	return (temp2);
}
