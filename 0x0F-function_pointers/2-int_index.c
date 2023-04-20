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
	int i = 0;

	if (array && size && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}

	}
	return (-1);

}
