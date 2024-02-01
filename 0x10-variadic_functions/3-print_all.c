#include "variadic_functions.h"
/**
 * print_all - function does some behavior
 * @format: string
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, f;
	char *str;
	va_list x;

	va_start(x, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		f = 1;
		switch (format[i])
		{
			case ('c'):
			printf("%c", va_arg(x, int));
			f = 0;
			break;
			case ('i'):
			printf("%d", va_arg(x, int));
			f = 0;
			break;
			case ('s'):
			f = 0;
			str = va_arg(x, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
			case ('f'):
			f = 0;
			printf("%f", va_arg(x, double));
			break;
		}
		i++;
		if (f == 0 && format[i] != '\0')
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(x);
}
