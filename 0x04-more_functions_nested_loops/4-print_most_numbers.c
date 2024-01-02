#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;
	char c;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		c = '0' + i;

		_putchar(c);
	}
	_putchar('\n');
}
