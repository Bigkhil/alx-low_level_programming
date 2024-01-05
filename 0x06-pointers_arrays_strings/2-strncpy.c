#include "main.h"

/**
 * _strncpy - update the value of variable to 98
 *
 * @dest: pointer to variable
 * @src: pointer to variable
 * @n: number to read
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ret;
	int i;

	for (i = 0 ; i < n && *dest != '\0' ; i++)
	{
		if (*src == '\0')
		{
			*dest = '\0';
			dest++;
		}
		else
		{
			*dest = *src;
			src++;
			dest++;
		}
		*dest = *src;
		src++;
		dest++;
	}
	return (ret);
}
