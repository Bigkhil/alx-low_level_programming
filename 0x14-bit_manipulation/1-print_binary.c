#include "main.h"
/**
 * print_binary - function to convert decimal to binary
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits = 0, printed = 0;
	unsigned long int x = n, temp = 0;

	while (x)
	{
		bits++;
		x = x >> 1;
	}
	while (bits)
	{
		temp = 1l << (bits -1);
		if (n & temp)
		{
			_putchar('1');
			printed = 1;
		}
		else
		{
			_putchar('0');
			printed = 1;
		}
		bits--;
	}
	if (!printed)
		_putchar('0');
	_putchar('\n');
}
