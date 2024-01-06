#include "main.h"

/**
 * reverse_array - update the value of variable to 98
 *
 * @a: pointer to variable
 * @n: pointer to variable
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int mid, i, *f, x;

	mid = n / 2;
	f = a + n - 1;
	if (mid % 2 == 0)
	{
		mid--;
	}
	for (i = 0 ; i <= mid ; i++)
	{
		x = *a;
		*a = *f;
		*f = x;
		f--;
		a++;
	}
}
