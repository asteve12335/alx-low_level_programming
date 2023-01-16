#include "main.h"
/**
 * _islower - Entry point
 * @c: character to check
 *
 * Description: checks for lower or upper case
 * Return: 1 if c is lower
 * 0 if c is upper
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
