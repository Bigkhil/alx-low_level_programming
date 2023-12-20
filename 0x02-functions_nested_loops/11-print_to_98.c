#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - add two numbers
 * @n: the number to read
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	char x;
	int i, a, b;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			a = i % 10;
			b = i / 10;
			if (n < 10)
			{
				_putchar(a);
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(b);
				_putchar(a);
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
			a = i % 10;
			b = i / 10;
			if (n < 10)
			{
				_putchar(a);
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(b);
				_putchar(a);
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
