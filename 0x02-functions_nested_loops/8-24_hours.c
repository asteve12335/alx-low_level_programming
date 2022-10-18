#include "main.h"
/**
 * jack_bauer - prints 00:00 to 23_59
 *
 * Return: Just prints
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; min++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
