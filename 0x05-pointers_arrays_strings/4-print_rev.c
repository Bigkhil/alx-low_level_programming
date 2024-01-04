#include "main.h"

/**
 * print_rev - update the value of variable to 98
 *
 * @s: pointer to variable
 * Return: void
 */
void print_rev(char *s)
{
	int x, i;

	x = _strlen(s);
	s += x;
	s--;
	for (i = x ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
