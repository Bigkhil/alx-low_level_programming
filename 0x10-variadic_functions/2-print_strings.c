#include "variadic_functions.h"
/**
 * print_strings - function does some behavior
 * @separator: string
 * @n: arguments counter
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	va_list x;
	unsigned int i;

	va_start(x, n);
	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(x, int);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(x);
}
