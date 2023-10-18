#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: The string to be printed between numbers.
 * @n: The number of arguments.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arg;

	va_start(arg, n);
	for (x = 0; x < n; x++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			if (x != n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(arg, int));
	}
	putchar('\n');
	va_end(arg);
}
