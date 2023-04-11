#include "stdio.h"

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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = argv[1];
		int y = argv[2];
		int res = argv[1] * argv[2]'

		printf("%d\n", res);
		return (0);
	}

}
