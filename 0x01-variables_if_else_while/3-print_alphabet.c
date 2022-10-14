#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Alphabets uppercase
 * Return: 0 success
 */
int main(void)
{
	char letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
