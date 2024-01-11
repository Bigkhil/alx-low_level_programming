#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - update the value of variable to 98
 *
 * @n: pointer to variable
 * Return: void
 */
int _sqrt_recursion(int n)
{
	return (getroot(n, n / 2));
}
/**
 * getroot - update the value of variable to 98
 *
 * @n: pointer to variable
 * @x: pointer to variable
 * Return: int
 */
int getroot(int n, int x)
{
	if (x < 0)
	{
		return (-1);
	}
	if ((x * x) == n)
	{
		return (x);
	}
	getroot(n, x - 1);
}
