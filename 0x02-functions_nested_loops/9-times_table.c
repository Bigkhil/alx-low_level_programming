#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the times table
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void times_table(void)
{
	char a, b;
	int i, j, ans, x, z;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			ans = i * j;
			x = ans % 10;
			z = ans / 10;
			a = x + '0';
			b = z + '0';
			if (ans > 9)
			{
				_putchar(b);
				_putchar(a);
				if (j != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar(b);
				if (j != 9)
				{
					_putchar(',');
				}
				if (((j + 1) * i) <= 9)
				{
					_putchar(' ');
				}
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
