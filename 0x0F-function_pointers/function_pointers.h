#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
#endif
