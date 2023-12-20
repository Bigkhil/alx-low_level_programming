#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char x[8] = "_putchar";

	for (int i = 0 ; i < 8 ; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
