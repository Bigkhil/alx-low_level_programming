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
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (1);
}
