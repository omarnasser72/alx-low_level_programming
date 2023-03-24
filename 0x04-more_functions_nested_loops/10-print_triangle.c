#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: param
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (k = size - j ; k > 0; k--)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
