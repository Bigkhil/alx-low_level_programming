#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, z;
	char c, x;

	x = '1';

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			c = '0' + j;

			if (j > 9)
			{
				c = '0' + j - 10;

				_putchar(x);
			}
			_putchar(c);
		}
		if (i < 9)
		{
			_putchar('\n');
		}
	}
}
