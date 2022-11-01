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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i][j];
			}
		}
	}
	j = 0;
	while ((i >= 0) && (j < size))
	{
		sum2 = sum2 + a[i][j];
		i--;
		j++;
	}
	printf("%d, %d", sum1, sum2);
}
