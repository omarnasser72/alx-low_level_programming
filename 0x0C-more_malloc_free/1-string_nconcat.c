#include "main.h"

/**
 * string_nconcat - check for char
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 *
 * Return: on success 1.
 *
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, s1_len, s2len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	p = malloc(s1_len + n + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}

	p[i] = '\0';
	return (p);
}
