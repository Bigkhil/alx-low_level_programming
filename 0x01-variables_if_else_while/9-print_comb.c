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

	int x;

	x = 48;
	for (i = 0 ; i < 9 ; i++)
	{
		putchar(x);
		if (i == 8)
		{
			break;
		}
		putchar(44);
		putchar(32);
		x++;
		}
	putchar ('\n');
	return (0);
}
