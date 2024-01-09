#include "main.h"

/**
 * _memcpy - update the value of variable to 98
 *
 * @dest: pointer to variable
 * @src: pointer to variable
 * @n: number to read
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ret;
	unsigned int i;

	ret = dest;
	i = 0;
	for (i = 0 ; i < n ; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (ret);
}
