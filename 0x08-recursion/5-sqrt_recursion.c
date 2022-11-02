#include "main.h"

/**
 * _sqrt - returns the square root of a number
 * @n: sum
 * @y: buffer
 * Return: square root of n
 */

int _sqrt(int n, int y)
{
	if (n == 1)
		return (1);
	else if (y == n || n < 0)
		return (-1);
	else if (y * y == n)
		return (y);
	else
		return (_sqrt(n, y + 1));
}

/**
 * _sqrt_recursion - returns to the _sqrt function
 * @n: an integer
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
