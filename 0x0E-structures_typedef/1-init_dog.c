#include "dog.h"
/**
 * init_dog - function does some behavior
 * @d: pointer to struct variable
 * @name: string
 * @age: float
 * @owner: string
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		if (name)
		{
			d->name = name;
		}
		if (age)
		{
			d->age = age;
		}
		if (owner)
		{
			d->owner = owner;
		}
	}
}
