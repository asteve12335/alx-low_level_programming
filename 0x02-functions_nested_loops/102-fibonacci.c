#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	long int n1 = 1, result, n2 = 2, nlast = 50;
	int i;

	printf("%lu, %lu, ", n1, n2);
	for (i = 2; i < nlast; i++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (i != nlast - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
