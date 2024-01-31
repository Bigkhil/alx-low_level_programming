#include "variadic_functions.h"
/**
 * sum_them_all - function does some behavior
 * @n: arguments counter
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(x, n);
	sum = 0;
	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(x, int);
	}
	va_end(x);
	return (sum);
}
