#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: pointer to char array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i == 0 || i == 1 || i == 6 || i == 7)
			{
				_putchar(*a[j]);
			}
			else
			{
				_putchar(" ");
			}
		}
		_putchar('\n')
	}
}
