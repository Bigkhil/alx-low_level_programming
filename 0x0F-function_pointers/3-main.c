#include "3-calc.h"
/**
 * main - function does some behavior
 * @argc: arguments counter
 * @argv: array of pointer to characters
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *error = "Error";
	int x, y, i, z;

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
	if (argv[2][0] != '+' &&
	 argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
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
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
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
	x = atoi(argv[1][0]);
	y = atoi(argv[3][0]);
	z = get_op_func(argv[2])(x, y);
	printf("%d",z);
	_putchar('\n');
	return (0);
}
