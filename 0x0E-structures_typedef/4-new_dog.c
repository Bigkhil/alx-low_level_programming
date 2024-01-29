#include "dog.h"
/**
 * new_dog - function does some behavior
 * @name: pointer to struct variable
 * @age: float
 * @owner: string
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
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
	return (d);
}
