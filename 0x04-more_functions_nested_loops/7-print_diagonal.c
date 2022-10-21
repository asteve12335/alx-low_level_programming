#include "main.h"

/**
 * print_diagonal - prints '\' n times
 * @n: specifies frequency
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
