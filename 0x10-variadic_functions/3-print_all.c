#include "variadic_functions.h"
/**
 * getlength - function does some behavior
 * @x: string
 * Return: int
 */
int getlength(const char * const x)
{
	int l;

	l = 1;
	if (x == NULL)
	{
		return (0);
	}
	while (x[l] != '\0')
	{
		l++;
	}
	return (l);
}
/**
 * print_all - function does some behavior
 * @format: string
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, leng;
	char *str;
	va_list x;

	va_start(x, format);
	leng = getlength(format);
	i = 0;
	while (i < leng)
	{
		switch (format[i])
		{
			case ('c'):
			printf("%c", va_arg(x, int));
			break;
			case ('i'):
			printf("%d", va_arg(x, int));
			break;
			case ('s'):
			str = va_arg(x, char *);
			if (str == NULL)
				printf("(nil)");
			else if (str)
				printf("%s", va_arg(x, char *));
			break;
			case ('f'):
			printf("%f", va_arg(x, double));
			break;
			default:
			break;
		}
		if (i < (leng - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
