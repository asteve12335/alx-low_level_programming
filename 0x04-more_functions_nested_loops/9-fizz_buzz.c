#include <stdio.h>

/**
*fizz_buzz - displays the game results
*Returns: nothing
*/

void fizz_buzz(void)
{
	int i;

	i = 1;
	while (i < 100)
	{
		if (i % 15 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz ");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz ");
	}
	else
	{
		printf("%d ", i);
	}
	i++;
	}
}
