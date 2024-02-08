#include "main.h"
/**
 * binary_to_uint - function to convert binary to decimal
 * @b: pointer to char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, i, pow = 1;

	if (b == NULL)
		return (0);
	for (i = strlen(b) ; i >= 0 ; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			ans += pow;
		pow *= 2;
	}
	return (ans);
}
