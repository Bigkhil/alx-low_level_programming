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
		if (d->name != NULL)
		{
			n = d->name;
		}
		if (d->owner != NULL)
		{
			o = d->owner;
		}
		printf("Name: %s\nAge: %f\nOwner: %s", *n, ag, *o);
	}
}
