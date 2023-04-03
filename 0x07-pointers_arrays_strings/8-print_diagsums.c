#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - check for char
 * @a: parameter
 * @size: parame
 *
*/

void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		d2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
