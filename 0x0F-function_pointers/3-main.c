#include "3-calc.h"
/**
 * main - function does some behavior
 * @argc: arguments counter
 * @argv: array of pointer to characters
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(x, y));
	return (0);
}
