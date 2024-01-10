#include <stdio.h>
#include "main.h"
/**
 * _strspn - update the value of variable to 98
 *
 * @s: pointer to variable
 * @accept: pointer to variable
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;
	char *st;

	st = accept;
	x = 0;
	while (*s != '\0')
	{
		y = 0;
		accept = st;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				x++;
				y = 1;
				break;
			}
			accept++;
		}
		if (y == 0)
		{
			return (x);
		}
		s++;
	}
	return (x);
}
