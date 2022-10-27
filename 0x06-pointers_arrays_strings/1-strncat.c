#include "main.h"

/**
 * _strncat - concatenates src to dest depending on size n
 * @n: an integer controls the elements to be added to string one
 * @dest: string one
 * @src:string tw0
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lendest = 0;
	int counter = 0;

	while (dest[counter] != '\0')
	{
		lendest++;
		counter++;
	}
	for (i = 0; src[i] < src[n]; i++)
	{
		dest[lendest + i] = src[i];
	}
	return (dest);
}
