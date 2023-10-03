#include "main.h"

/**
 * argstostr -  concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0;
	int count = 0;
	char *output;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			count++;
		count++;
	}
	output = malloc(sizeof(char) * count + 1);
	if (output == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			output[z] = av[x][y];
			z++;
		}
		output[z++] = '\n';
	}
	output[z] = '\0';
	return (output);
}
