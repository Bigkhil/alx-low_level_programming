#include "main.h"
/**
 * _calloc - function does some behavior
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;
	unsigned int i;
	void *x;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	x = malloc(nmemb * size);
	if (x == NULL)
	{
		return (NULL);
	}
	y = x;
	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		y[i] = 0;
	}
	return (x);
}
