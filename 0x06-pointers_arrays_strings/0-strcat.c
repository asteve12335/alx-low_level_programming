#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *cat;
	int i, j;

	for (i = 0; i != '\0'; i++)
	{
		cat[i] = dest[i];
	}

	for (j = i + 1; j <= '\0'; j++)
	{
		cat[j] = src[j];
	}
	return (cat);
}
