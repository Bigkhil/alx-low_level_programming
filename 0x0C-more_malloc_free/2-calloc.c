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
	void *x, *temp;

	x = malloc(nmemb * size);
	if (x == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	temp = x;
	y = x;
	while (y != temp + (size * nmemb) - 1)
	{
		*y = 0;
		y++;
	}
	return (temp);
}
