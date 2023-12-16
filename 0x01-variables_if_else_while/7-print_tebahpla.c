#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char x = 'z';

	for (i = 0 ; i < 26 ; i++)
	{
		putchar (x);
		x--;
		}
	putchar ('\n');
	return (0);
}
