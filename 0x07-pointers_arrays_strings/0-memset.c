#include "main.h"

/**
 * _memset - update the value of variable to 98
 *
 * @s: pointer to variable
 * @b: pointer to variable
 * @n: number to read
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ret;
	int i;

	ret = s;
	i = 0;
	for (i = 0 ; i < n ; i++)
	{
		*s = b;
		s++;
	}
	return (ret);
}
