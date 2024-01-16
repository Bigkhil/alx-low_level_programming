#include <stdio.h>
#include "main.h"
/**
 * main - update the value of variable to 98
 *
 * @argc: number
 * @argv: array of strings
 * Return: void
 */
int main(int argc, char *argv[])
{
	char *x;

	x = argv[0];
	while (*x != ' ')
	{
		_putchar(*x);
		x++;
	}
	return (0);
}
