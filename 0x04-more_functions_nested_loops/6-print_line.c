#include "main.h"

/**
 * print_line - print line
 *
 * @n: number of lines that is read
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
