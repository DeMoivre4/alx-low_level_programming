#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from one number to another
 * @n: start number
 * @m: end number
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int a;
	unsigned long int ex = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		a = ex >> x;
		if (a & 1)
			y++;
	}
	return (y);
}
