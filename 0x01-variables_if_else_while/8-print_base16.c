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
	char z;

	int i;

	int x;

	x = 48;
	z = 'a';
	for (i = 0 ; i < 16 ; i++)
	{
		if (i >= 10)
		{
			putchar(z);
			z++;
		}
		else
		putchar(x);
		x++;
		}
	putchar ('\n');
	return (0);
}
