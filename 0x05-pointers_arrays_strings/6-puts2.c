#include "main.h"

/**
 * puts2 - update the value of variable to 98
 *
 * @str: pointer to variable
 * Return: void
 */
void puts2(char *str)
{
	char *ptr;

	ptr = str;
	while (*str != '\0')
	{
		str++;
	}
	while (ptr < str)
	{
		_putchar(*ptr);
		ptr += 2;
	}
}
