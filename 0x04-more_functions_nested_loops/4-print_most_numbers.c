#include "main.h"

/**
 * print_most_numbers - displays from 0 to 9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
