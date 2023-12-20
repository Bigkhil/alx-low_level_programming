#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 *@n: The number to read
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int n)
{
	if (n == INT_MIN)
	{
		n = 8;
	}
	char x;

	x = '0' + (abs(n) % 10);
	_putchar(x);
	return (abs(n) % 10);
}
