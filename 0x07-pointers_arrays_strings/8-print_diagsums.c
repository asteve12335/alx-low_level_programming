#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: pointer to an int
 * @size: int
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i][j];
			}
		}
	}
	j = 0;
	while ((i >= 0) && (j < n))
	{
		sum2 = sum2 + a[x][y];
		x--;
		y++;
	}
	printf("%d, %d", sum1, sum2);
}
