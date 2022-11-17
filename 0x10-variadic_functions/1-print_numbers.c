#include "variadic_functions.h"
#include <stdio.h>

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
		printf("%d, " va_arg(pl, int));
	}
	_putchar('\n');
}
