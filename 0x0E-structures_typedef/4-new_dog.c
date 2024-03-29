#include "dog.h"
/**
 * _strlen -  print the length
 * @s: is a string
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

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
	dog_t *dd;

	dd = malloc(sizeof(dog_t));
	if (dd == NULL || !name || age < 0 || !owner)
	{
		return (NULL);
	}
	dd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dd->name == NULL)
	{
		free(dd);
		return (NULL);
	}
	dd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dd->owner == NULL)
	{
		free(dd->name);
		free(dd);
		return (NULL);
	}
	dd->name = _strcopy(dd->name, name);
	dd->age = age;
	dd->owner = _strcopy(dd->owner, owner);
	return (dd);
}
