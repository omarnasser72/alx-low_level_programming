#ifndef function_pointers_
#define function_pointers_

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /*function_pointers*/
