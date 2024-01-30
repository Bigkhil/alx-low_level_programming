#include "3-calc.h"
/**
 * main - function does some behavior
 * @argc: arguments counter
 * @argv: array of pointer to characters
 * Return: int
 */
int _putchar(char c);
int main(int argc, char *argv[])
{
	char *error = "Error";
	int x, y, i;

	if (argc != 4)
	{
		i = 0;
		while (i < 5)
		{
			_putchar(error[i]);
			i++;
		}
		_putchar('\n');
		exit(98);
	}
	if (*(argv[2]) != '+' &&
	 *(argv[2]) != '-' && *(argv[2]) != '*' && *(argv[2]) != '/' && *(argv[2]) != '%')
	{
		i = 0;
		while (i < 5)
		{
			_putchar(error[i]);
			i++;
		}
		_putchar('\n');
		exit(99);
	}
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && (*(argv[3]) == '0'))
	{
		i = 0;
		while (i < 5)
		{
			_putchar(error[i]);
			i++;
		}
		_putchar('\n');
		exit(100);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	return (get_op_func(argv[2])(x, y));
}
