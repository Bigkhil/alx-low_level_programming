#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - update the value of variable to 98
 *
 * @s: pointer to variable
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
	if ((s - 1) == NULL)
	{
		_putchar('\n');
	}
}
