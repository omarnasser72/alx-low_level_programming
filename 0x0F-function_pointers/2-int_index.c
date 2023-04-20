#include "function_pointers.h"

/**
 * int_index - check for char
 * @array: parameter
 * @size: size
 * @cmp: fun
 *
 * Return: on success 1.
 *
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, match = 0;

	if (array && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
			{
				match = 1;
				return (i);
			}
		}
		if (match == 0)
		{
			return (-1);
		}
	}
	if (size <= 0)
	{
		return (-1);
	}
}
