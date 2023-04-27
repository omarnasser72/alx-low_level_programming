#include "function_pointers.h"

/**
 * print_name - check for char
 * @name: parameter
 * @f:fun
 *
 * Return: on success 1.
 *
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
