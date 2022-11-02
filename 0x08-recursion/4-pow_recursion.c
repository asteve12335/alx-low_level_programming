#include "main.h"

/**
 * _pow_recursion - returns x to the power y
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(y - 1));
}
