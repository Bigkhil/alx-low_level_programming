#include "main.h"

/**
 * _strncat - update the value of variable to 98
 *
 * @dest: pointer to variable
 * @src: pointer to variable
 * @n: number to read
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ret;

	ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	if (*src == '\0')
	{
		*dest = *src;
	}
	else
	{
		dest++;
		*dest = '\0';
	}
	return (ret);
}
