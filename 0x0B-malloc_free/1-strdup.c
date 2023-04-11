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
	int size = 0;
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[size] != '\0'; size++)
	;

	ptr = malloc(size * sizeof(str) + 1);

	if (ptr == 0)
	{	
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
