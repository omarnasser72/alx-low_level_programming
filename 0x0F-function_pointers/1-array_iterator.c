#include "function_pointers.h"

/**
 * array_iterator - check for char
 * @array: parameter
 * @size: param
 * @action: fun
 *
 * Return: on success 1.
 *
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		for (; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
