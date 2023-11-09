#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if successful, 1 if fail
 */

int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
