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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
