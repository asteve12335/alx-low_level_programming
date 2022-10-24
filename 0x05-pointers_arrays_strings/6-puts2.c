#include "main.h"

/**
 * puts2 -Prints every other character with 1st 
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for  (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[0]);
		_putchar(str[i]); 
	}
	_putchar('\n');
}
