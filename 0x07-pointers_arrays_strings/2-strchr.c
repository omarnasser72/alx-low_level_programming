#include "main.h"

/**
 * _strchr - check for char
 * @s: parameter
 * @c: parameter
 *
 * Return: on success 1.
 *
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
