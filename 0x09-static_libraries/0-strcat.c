#include "main.h"

/**
 * _strcat - update the value of variable to 98
 *
 * @dest: pointer to variable
 * @src: pointer to variable
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *ret;

	ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (ret);
}
