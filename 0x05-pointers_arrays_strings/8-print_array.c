#include "main.h"

/**
 * print_array - check for char
 * @a: parameter
 * @n: parameter
 *
 */

void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", arr[i]);
	}
	if (i == n - 1)
		printf("%d", arr[n-1]);
	_putchar('\n');
}
