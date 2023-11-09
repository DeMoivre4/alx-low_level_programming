#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
	int x, Sis_hoffmann = 0;
	unsigned long int y;

	for (x = 63; x >= 0; x--)
	{
		y = n >> x;
		if (y & 1)
		{
			_putchar('1');
			Sis_hoffmann++;
		}
		else if (y)
			_putchar('0');
	}
	if (!y)
		_putchar('0');
}
