#include "variadic_functions.h"
/**
 * print_numbers - function does some behavior
 * @separator: string
 * @n: arguments counter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start(x, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(x, int));
		if (separator && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(x);
}
