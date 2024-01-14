#include "main.h"

/**
 * _isdigit - checks if the character is upper or lower case
 *
 * @c: the ascii code of the character
 *
 * Return: (1) if digit (0) else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
