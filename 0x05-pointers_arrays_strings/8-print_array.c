#include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: array
 * @n:number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(*a[i]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
