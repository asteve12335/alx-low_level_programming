#include <main.h>
/**
 * main - prints _putchar
 * Return: 0 success
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		putchar(c);
		i++;
	}
	return (0);
}
