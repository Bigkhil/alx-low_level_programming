#include "main.h"

/**
 * print_rev - update the value of variable to 98
 *
 * @s: pointer to variable
 * Return: void
 */
void print_rev(char *s)
{
	char *sx;
	int x;

	x = _strlen(s);
	sx = s;
	sx += x;
	sx--;
	while (sx != s)
	{
		_putchar(*sx);
		sx--;
	}
	_putchar(*sx);
	_putchar('\n');
}
