#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;
	char c;

	for (i = 0 ; i < 10 ; i++)
	{
		c = '0' + i;

		_putchar(c);
	}
	_putchar('\n');
}
