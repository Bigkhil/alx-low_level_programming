#include "main.h"

/**
 * print_rev - update the value of variable to 98
 *
 * @s: pointer to variable
 * Return: void
 */
void print_rev(char *s)
{
	int cntr, i;

	cntr = 0;
	while (*s != '\0')
	{
		cntr++;
		s++;
	}
	s--;
	for (i = cntr ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
