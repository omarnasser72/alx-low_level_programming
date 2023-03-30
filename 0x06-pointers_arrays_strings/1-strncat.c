#include "main.h"

/**
 * *_strcat - check for char
 * @dest: parameter
 * @src: parameter
 * @n: param
 *
 * Return: on success 1.
 *
*/

char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
