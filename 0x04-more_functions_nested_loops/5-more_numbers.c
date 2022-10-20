#include "main.h"

/**
 * more_numbers - displays 0 t0 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		char *s = "01234567891011121314";

		for  (j = 0; j <= 19; j++)
			_putchar(s[j]);
		_putchar('\n');
		i++;
	}
}
