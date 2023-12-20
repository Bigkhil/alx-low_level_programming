#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char x = 'a';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		_putchar(x);
		x++;
	}
}
