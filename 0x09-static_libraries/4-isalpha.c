#include "main.h"
/**
 * _isalpha - Entry point
 * @c: character to check
 *
 * Description: checks for alphabet
 * Return: 1 means True and 0 Fals
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	return (0);
}
