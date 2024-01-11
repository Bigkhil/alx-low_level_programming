#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - update the value of variable to 98
 *
 * @s: pointer to variable
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
