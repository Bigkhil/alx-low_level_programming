#include "main.h"

/**
 * _strchr - update the value of variable to 98
 *
 * @s: pointer to variable
 * @c: pointer to variable
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
