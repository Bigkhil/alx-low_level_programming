#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - update the value of variable to 98
 *
 * @x: pointer to variable
 * @y: pointer to variable
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
