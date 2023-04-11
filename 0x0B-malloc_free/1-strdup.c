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
	int j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[size] != '\0'; size++) 
	;
	
	ptr = (char *)malloc(size * sizeof(str) + 1);

	if (size == 0)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
