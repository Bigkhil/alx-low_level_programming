#include "main.h"
/**
 * get_bit - function to convert decimal to binary
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = n;

	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
