#include "main.h"
/**
 * checknumber - update the value of variable to 98
 *
 * @x: pointer
 * Return: number
 */
int checknumber(char *x)
{
	char *y;

	y = x;
	while (*y != ' ' && *y != '\0')
	{
		if (*y < 48 || *y > 57)
		{
			return (0);
		}
		y++;
	}
	return (1);
}
/**
 * main - update the value of variable to 98
 *
 * @argc: number
 * @argv: array of strings
 * Return: void
 */
int main(int argc, char *argv[])
{
	int res, i;

	res = 0;
	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (checknumber(argv[i]) == 1)
			{
				res = res + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
	}
	return (0);
}
