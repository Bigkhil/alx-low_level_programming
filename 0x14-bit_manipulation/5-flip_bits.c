#include "main.h"
/**
 * flip_bits - function to convert decimal to binary
 * @n: unsigned long int
 * @m: unsigned int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cntr = 0;
	unsigned long int req = n ^ m;

	while (req != 0)
	{
		if ((req & 1) == 1)
			cntr++;
		req = req >> 1;
	}
	return (cntr);
}
