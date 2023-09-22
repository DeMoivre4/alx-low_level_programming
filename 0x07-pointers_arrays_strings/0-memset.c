#include "main.h"

/**
 * _memset - main function
 * @s: fill area with byte
 * @d: constant byte
 * @n: number of bytes
 * Return: pointer to s
 */

void simple_print_buffer(char *s, char b, unsigned int n)
{
	unsigned int x;
	
	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
