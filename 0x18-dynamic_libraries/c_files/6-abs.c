#include "main.h"
/**
 * _abs - Entry point
 * @n: A real number
 *
 * Description: Computes absolute value
 * Return: int success
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
