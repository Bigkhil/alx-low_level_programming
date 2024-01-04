#include "main.h"

/**
 * rev_string - update the value of variable to 98
 *
 * @s: pointer to variable
 * Return: void
 */
void rev_string(char *s)
{
	int cntr, i, mid;
	char x, *d;

	cntr = 0;
	d = s;
	while (*s != '\0')
	{
		cntr++;
		s++;
	}
	s--;
	if (cntr % 2 == 0)
	{
		mid = (cntr / 2) - 1;
	}
	else
	{
		mid = cntr / 2;
	}
	for (i = 0 ; i <= mid ; i++)
	{
		x = *s;
		*s = *d;
		*d = x;
		d++;
		s--;
	}
}
