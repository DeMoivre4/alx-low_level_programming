#include "main.h"

/**
 * alloc_grid - two dimensional array of integers
 * @width: number of colomns
 * @height: number of rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		output[x] = malloc(sizeof(int) * width);
		if (output[x] == NULL)
		{
			free(output);
			for (y = 0; y <= height; y++)
				free(output[y]);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			output[x][y] = 0;
	}
	return (output);
}
