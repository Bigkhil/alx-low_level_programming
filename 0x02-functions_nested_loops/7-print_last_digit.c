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
	char x = '0' + (n % 10);

	_putchar(x);
	return (n % 10);
}
