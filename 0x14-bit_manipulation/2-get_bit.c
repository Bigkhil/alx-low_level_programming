#include "main.h"
/**
 * get_bit - function to convert decimal to binary
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = n, temp = 0, bits = 0;

	while (x)
	{
		bits++;
		x = x >> 1l;
	}
	if (index >= bits)
		return (-1);
	temp = 1l << index;
	if (temp & n)
		return (1);
	return (0);
}
