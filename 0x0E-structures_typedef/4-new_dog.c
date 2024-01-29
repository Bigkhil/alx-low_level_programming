#include "dog.h"
/**
 * _strlen -  print the length
 * @s: is a string
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 1;

	while (*s++)
		len++;
	return (len);
}

/**
 * _strcopy - copy string to another
 * @src: the main string
 * @dest: the copy
 *
 * Return: the copy @dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
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
	if (d == NULL || !name || age < 0 || !owner)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(char) * _strlen(name));
	if (d->name == NULL)
	{
		free(d->name);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * _strlen(owner));
	if (d->owner == NULL)
	{
		free(d->owner);
		return (NULL);
	}
	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);
}