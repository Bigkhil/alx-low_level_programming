#include "main.h"
/**
 * get_bit - function to convert decimal to binary
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bits = 0;
	unsigned long int x = n, temp = 0;

	while (x)
	{
		bits++;
		x = x >> 1;
	}
	if (index >= bits)
		return (-1);
	temp = 1l << index;
	return (temp & n);
}
