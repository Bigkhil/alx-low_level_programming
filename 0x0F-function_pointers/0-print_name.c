#include "function_pointers.h"
/**
 * print_name - function does some behavior
 * @name: string
 * @f: pointer to function
 * Return: int
 */
void print_name(char *name, void (*f)(char *))
{
	char *str;

	str = name;
	f(str);
}
