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
	char *cat;
	int i;

	for (i = 0; i != '\0'; i++)
	{
		cat[i] = dest[i];
	}

	for (i = strlen(dest); i <= '\0'; i++)
	{
		cat[i] = src[i];
	}
	return (cat);
}
