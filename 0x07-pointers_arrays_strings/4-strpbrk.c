#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - update the value of variable to 98
 *
 * @s: pointer to variable
 * @accept: pointer to variable
 * Return: unsigned int
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int y;

	while (*s != '\0')
	{
		y = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}
	if (*s == *accept)
	{
		return (s);
	}
	return (NULL);
}
