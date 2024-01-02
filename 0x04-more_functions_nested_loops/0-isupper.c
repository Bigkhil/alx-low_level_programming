#include "main.h"

/**
 * _isupper - checks if the character is upper or lower case
 *
 * @c: the ascii code of the character
 *
 * Return: (1) if upper (0) if lower
 */

int _isupper(int c)
{
	if (c >= 97)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
