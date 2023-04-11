#include "main.h"

/**
 * _strdup - check for char
 * @str: parameter
 *
 * Return: on success 1.
 *
*/

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	else
	{
		int size = 0;
		char *i = *str;
		
		while (*i)
		{
			i++;	
			size++;
		}
		if (size == 0)
			return (NULL);

		char *ptr = (char *)malloc(size);
		int j;
		char *p = *str;

		for (j = 0; j < size; j++)
		{
			ptr[j] = *p;
		}
		return (ptr);
		
	}
}
