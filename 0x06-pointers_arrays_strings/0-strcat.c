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
	char cat[strlen(dest) + strlen(src)];
	int i, j;

	for (i = 0; i != '\0'; i++)
	{
		cat[i] = dest[i];
	}

	for (j = strlen(dest); j <= '\0'; j++)
	{
		cat[j] = src[j];
	}
	return (cat);
}
