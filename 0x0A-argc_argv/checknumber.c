#include "main.h"
/**
 * checknumber - update the value of variable to 98
 *
 * @x: pointer
 * Return: number
 */
int checknumber(char *x)
{
	char *y;

	y = x;
	while (*y != ' ' && *y != '\0')
	{
		if (*y < 48 || *y > 57)
		{
			return (0);
		}
		y++;
	}
	return (1);
}
