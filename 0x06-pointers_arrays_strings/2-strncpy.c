#include "main.h"

/**
 * _strncpy - check for char
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: on success 1.
 *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (srcj[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
