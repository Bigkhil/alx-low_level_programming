#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _putchar(char c);
/**
 * struct dog - function does some behavior
 * @name: string
 * @age: float
 * @owner: string
 * Description: void
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif