#include "dog.h"
/**
 * print_dog - function does some behavior
 * @d: pointer to struct variable
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *n, *o;
	float ag;

	if (d)
	{
		if (d->name)
		{
			n = d->name;
		}
		else
		{
			n = "(nil)";
		}
		if (d->owner)
		{
			o = d->owner;
		}
		else
		{
			o = "(nil)";
		}
		ag = d->age;
		printf("Name: %s\nAge: %f\nOwner: %s\n", n, ag, o);
	}
}
