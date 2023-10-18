#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  function that prints strings.
 * @separator: The separators between strings.
 * @n: The number of arguments.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int x;

	va_start(arg, n);
	for (x = 0; x < n; x++)
	{
		char *y = va_arg(arg, char *);

		if (y == NULL)
			printf("(nil)");
		else
			printf("%s", y);
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
