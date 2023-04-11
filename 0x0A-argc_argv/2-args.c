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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
