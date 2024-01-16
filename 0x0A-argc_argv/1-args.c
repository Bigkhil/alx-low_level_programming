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
	(void) argv[argc];
	printf("%d\n", argc - 1);
	return (0);
}
