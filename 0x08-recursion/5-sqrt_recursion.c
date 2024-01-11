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
	long z = n / 2;

	if (n == 1)
	{
		return (1);
	}
	return (getroot(n, z));
}
/**
 * getroot - update the value of variable to 98
 *
 * @n: pointer to variable
 * @x: pointer to variable
 * Return: int
 */
int getroot(int n, long x)
{
	if (x < 0)
	{
		return (-1);
	}
	if ((x * x) == n)
	{
		return (x);
	}
	return (getroot(n, x - 1));
}
