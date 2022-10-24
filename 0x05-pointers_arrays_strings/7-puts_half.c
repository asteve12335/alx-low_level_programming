#include <string.h>
#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string parameter
 * Return void
 */

void puts_half(char *str)
{
	if (strlen(str) % 2 == 0)
	{
		int n = (strlen(str)) / 2;
		int i;

		for (i = n; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		int n = (strlen(str) - 1) / 2;
		int i;

		for (i = n; str[i] '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
}
