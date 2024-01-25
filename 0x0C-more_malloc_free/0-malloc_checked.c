#include "main.h"
/**
 * malloc_checked - function does some behavior
 * @b: int
 * Return: int
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
