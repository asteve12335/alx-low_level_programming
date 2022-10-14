#include <stdio.h>
/**
 * main - Entry point
 * Description: lower alphabet except e and q
 * Return:0 success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (!(i == 113 || i == 101))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
