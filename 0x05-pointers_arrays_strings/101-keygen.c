#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password
 * Return: void
 */
int main(void)
{
	int sum;
	char p;

	srand(time(NULL));
	while (sum <= 2645)
	{
		p = rand() % 128;
		sum += p;
		putchar(p);
	}
	putchar(2772 - sum);
	return (0);
}
