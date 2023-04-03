#include "main.h"

/**
 * _strstr - check for char
 * @haystack: parameter
 * @needle: parameter
 *
 * Return: on success 1.
 *
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *p = needle;
		char *l = haystack;

		while (*l == *p && *p != '\0')
		{
			p++;
			l++;

		}
		if (*p == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
