#include "main.h"

/**
 * _strlen - update the value of variable to 98
 *
 * @s: pointer to variable
 * Return: integer.
 */
int _strlen(char *s)
{
	int cntr;

	cntr = 0;
	while (*s != '\0')
	{
		cntr++;
		s++;
	}
	return (cntr);
}
