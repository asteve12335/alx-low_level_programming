#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_numbers - displays numbers
 * @separator: separator
 * @n: parameter
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pl;
	unsigned int i;

	va_start(pl, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(pl, int));
		if (i < (n - 1) && separator)
		{
			printf("%s ", separator);
		}
	}
	va_end(pl);
	_putchar('\n');
}
