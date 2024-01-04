#include "main.h"

/**
 * _puts - update the value of variable to 98
 *
 * @str: pointer to variable
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
