#include "main.h"

/**
 * _strcmp - update the value of variable to 98
 *
 * @s1: pointer to variable
 * @s2: pointer to variable
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;
	int diff;

	while (s1 != '\0' && s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	a = *s1;
	b = *s2;
	diff = a - b;
	return (diff);
}