#include "main.h"
/**
 * set_bit - function to convert decimal to binary
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cntr = 0;
	unsigned long int req = n ^ m;

	while (req >> 1)
	{
		cntr++;
	}
	return (cntr);
}
