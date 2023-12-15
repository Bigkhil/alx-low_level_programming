#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int i = sizeof(int);
	int c = sizeof(char);
	int li = sizeof(long int);
	int ll = sizeof(long long);
	int f = sizeof(float);
	printf("Size of a char: %d byte(s)\n", c);
	printf("Size of a int: %d byte(s)\n", i);
	printf("Size of a long int: %d byte(s)\n", li);
	printf("Size of a long long int: %d byte(s)\n", ll);
	printf("Size of a float: %d byte(s)", f);
	return (0);
}
