#include "main.h"

/**
 * create_array - check for char
 * @size: parameter
 * @c: paramter
 * Return: on success 1.
 *
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = (char*)calloc(size, size of (char));
	
	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}

