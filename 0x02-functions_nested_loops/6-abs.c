#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute value of a number
 *@n: The number to read
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}
