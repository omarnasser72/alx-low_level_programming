#include "main.h"

/**
 * *_strcpy - check for char
 * @dest: parameter
 * @src: parameter
 *
 * Return: on success 1.
 *
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
