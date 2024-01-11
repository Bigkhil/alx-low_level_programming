#include <stdio.h>
#include "main.h"
/**
 * factorial - update the value of variable to 98
 *
 * @n: pointer to variable
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
