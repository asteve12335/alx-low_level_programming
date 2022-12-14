#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: parameter, last named parameter
 *
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	int sum;
	unsigned int i;

	va_start(vl, n);

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vl, int);
	}
	va_end(vl);
	return (sum);
}
