#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - update the value of variable to 98
 *
 * @s: pointer to variable
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s++);
}
