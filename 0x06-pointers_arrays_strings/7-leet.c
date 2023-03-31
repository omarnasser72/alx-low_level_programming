#include "main.h"

/**
 * leet - check for char
 * @str: parameter
 *
 * Return: on success 1.
 *
*/

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
		i++;
	}
	return (str);
}
