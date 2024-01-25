#include "main.h"
/**
 * getsize - function does some behavior
 * @str: string
 * Return: int
 */
unsigned int getsize(char *str)
{
	unsigned int x;

	x = 1;
	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}
/**
 * check - function does some behavior
 * @st: string
 * Return: char
 */
char *check(char *st)
{
	if (st == NULL)
	{
		st = "";
	}
	return (st);
}
/**
 * string_nconcat - function does some behavior
 * @s1: string
 * @s2: string
 * @n: unsigned int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size, i;

	s1 = check(s1);
	s2 = check(s2);
	if (n > getsize(s2))
	{
		n = getsize(s2);
	}
	size = getsize(s1) + n;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size - 1 ; i++)
	{
		if (*s1 != '\0')
		{
			str[i] = *s1;
			s1++;
		}
		else if (*s2 != '\0')
		{
			str[i] = *s2;
			s2++;
		}
	}
	str[i] = '\0';
	return (str);
}
