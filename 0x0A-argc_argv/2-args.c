#include <stdio.h>
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
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
