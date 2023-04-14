#include "main.h"

/**
 * array_range - check for char
 * @min: parameter
 * @max: parameter
 *
 * Return: on success 1.
 *
*/

int *array_range(int min, int max)
{
	int *arr = malloc(max - min + 1);
	unsigned int i;

	if (arr == NULL || min > max)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	arr[i] = '\0';
	return (arr);
}
