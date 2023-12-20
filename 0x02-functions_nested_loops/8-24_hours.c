#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints minutes of the day
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
	char a1, a2, a3, a4;
	int x1, x2, x3, x4;

	x1 = x2 = x3 = x4 = 0;
	while (x1 != 2 && x2 != 4)
	{
		a1 = x1 + '0';
		a2 = x2 + '0';
		a3 = x3 + '0';
		a4 = x4 + '0';
		_putchar(a1);
		_putchar(a2);
		_putchar(':');
		__putchar(a3);
		_putchar(a4);
		_putchar('\n');
		x4++;
		if (x4 > 9)
		{
			x4 = 0;
			x3++;
			if (x3 > 5)
			{
				x3 = 0;
				x2++;
				if (x2 > 9)
				{
					x2 = 0;
					x1++;
				}
			}
		}
	}
}
