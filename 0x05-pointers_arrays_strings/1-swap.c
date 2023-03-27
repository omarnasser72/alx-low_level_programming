#include "main.h"

/**
 * swap_int - check for char
 * @a: parameter
 * @b: parameter
 *
*/

void swap_int(int *a, int *b)
{
	int t;

	t = a;
	*a = *b;
	*b = t;
}
