#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: The number of arguements.
 * Returun: sum off arguemnets.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
