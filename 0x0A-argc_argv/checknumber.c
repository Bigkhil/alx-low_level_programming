#include "main.h"
/**
 * checknumber - update the value of variable to 98
 *
 * @x: pointer
 * Return: number
 */
int checknumber(char *x)
{
	while (*x != ' ' && *x != '\0')
	{
		if (*x < 48 || *x > 57)
		{
			return (0);
		}
		x++;
	}
	return (1);
}
