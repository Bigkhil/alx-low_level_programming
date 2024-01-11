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
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
}
