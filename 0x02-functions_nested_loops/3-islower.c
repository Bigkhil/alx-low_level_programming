#include "main.h"
#include <stdio.h>

/**
 * _islower - checks fpr lowercase alphabets
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
{
	if (c > 96)
	{
		return (1);
	}
	return (0);
}
