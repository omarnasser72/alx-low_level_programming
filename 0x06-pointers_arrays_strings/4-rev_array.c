#include "main.h"

/**
 * reverse_array - check for char
 * @a: parameter
 * @n: size
 *
 *
*/

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = a[i];
	}
}
