#include "dog.h"
/**
 * free_dog - function does some behavior
 * @d: pointer to struct variable
 * Return: pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
