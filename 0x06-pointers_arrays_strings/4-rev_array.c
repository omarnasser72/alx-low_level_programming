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

	n--;
	for (i = 0; i < n; i++, n--)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
