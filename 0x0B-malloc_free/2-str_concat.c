#include "main.h"
/**
 * getsize - function does some behavior
 *
 * @str: char
 * Return: int
 */
int getsize(char *str)
{
	int x;

	x = 1;
	if (str == NULL)
	{
		return (0);
	}
	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}
/**
 * str_concat - function does some behavior
 *
 * @s1: char
 * @s2: char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *arr, *temp;
	int size, i;

	size = getsize(s1) - 1 + getsize(s2);
	arr = malloc(sizeof(char) * size);
	temp = arr;
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size - 1 ; i++)
	{
		if (*s1 != '\0' && s1 != NULL)
		{
			arr[i] = *s1;
			s1++;
		}
		else if (*s2 != '\0' && s2 != NULL)
		{
			arr[i] = *s2;
			s2++;
		}
	}
	arr[size - 1] = '\0';
	return (temp);
}
