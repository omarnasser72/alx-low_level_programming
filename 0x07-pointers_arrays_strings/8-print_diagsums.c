#include "main.h"
#include "stdlib.h"

/**
 * print_diagsums - check for char
 * @a: parameter
 * @size: parame
 *
 *
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		d2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", d1, d2);
}
