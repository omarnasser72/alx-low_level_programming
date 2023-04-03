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
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				d1 += a[i][j];
			}
		}
	}

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			d2 += a[i][j];
		}
	}
	printf("%d, %d", d1, d2);
}
