#include "main.h"

/**
 * rev_string - update the value of variable to 98
 *
 * @s: pointer to variable
 * Return: void
 */
void rev_string(char *s)
{
	int cntr, i;

	cntr = 0;
	while (*s != '\0')
	{
		cntr++;
		s++;
	}
	s--;
	char str[cntr];


	for (i = 0 ; i < cntr ; i++)
	{
		str[i] = *s;
		s--;
	}
	for (i = 0 ; i < cntr ; i++)
	{
		*s = str[i];
		s++;
	}
}
