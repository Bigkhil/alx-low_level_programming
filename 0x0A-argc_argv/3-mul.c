#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - update the value of variable to 98
 *
 * @argc: number
 * @argv: array of strings
 * Return: void
 */
int main(int argc, char *argv[])
{
	int res, x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		res = x * y;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
