#include <stdio.h>
#include <stdlib.h>

/**
 * main - check for char
 * @argc: parameter
 * @argv: parameter
 *
 * Return: 0
 *
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
