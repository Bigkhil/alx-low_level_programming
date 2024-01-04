#include "main.h"

/**
 * swap_int - update the value of variable to 98
 *
 * @a: pointer to variable
 * @b: pointer to variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
