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
	char *ret;

	ret = accept;
	while (*s != '\0')
	{
		accept = ret;
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
	return (NULL);
}
