#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int lendest = 0;
	int counter = 0;

	while (dest[counter] != '\0')
	{
		lendest++;
		counter++;
	}
	for (i = lendest; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[lendest + i] = '\0';
	return (dest);
}
