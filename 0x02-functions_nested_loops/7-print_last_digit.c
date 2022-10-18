#include "main.h"
/**
 * print_last_digit - Prints the last digit of input value
 * @n: a Real number
 *
 * Return: last digit of input value
 */
int print_last_digit(int n)
{
	int last_value = n % 10;

	if (n < 0)
	{
		last_value *= -1;
	}
	_putchar(last_value + '0');

	return (last_value);
}
