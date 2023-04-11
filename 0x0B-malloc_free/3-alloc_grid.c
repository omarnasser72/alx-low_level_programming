#include "main.h"

/**
 * alloc_grid - check for char
 * @width: parameter
 * @height: parameter
 * Return: on success 1.
 *
*/

int **alloc_grid(int width, int height)
{
	int r, c;
	int **arr;

	arr = malloc(sizeof(*arr) * height);

	if (width <= 0 || height <= 0 || arr == 0)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		arr[r] = malloc(sizeof(**arr) * width);
		if (arr[r] == 0)
		{
			while (r--)
				free(arr[r]);
			free(arr);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			arr[r][c] = 0;
	}
	return (arr);

}
