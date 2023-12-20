#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		char temp = 'a';

		for (j = 0 ; j < 26 ; j++)
		{
			_putchar(temp);
			temp++;
		}
		_putchar('\n');
	}
}
