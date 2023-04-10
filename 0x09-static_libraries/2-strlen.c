#include "main.h"

/**
 * _strlen - check for char
 * @s: parameter
 *
 * Return: length of string
 *
*/

int _strlen(char *s)
{
	int c, i;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	return (c);
}
