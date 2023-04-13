#include "main.h"

/**
 * malloc_checked - check for char
 * @b: parameter
 *
 * Return: on success 1.
 *
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
