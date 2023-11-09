#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: search for integer.
 * @index: numbers of bit of index(s)
 * Return: The bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 63)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}
