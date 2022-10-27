#include "main.h"

/**
 * _strncpy - copies src string to dest depending on size n
 * @n: integer
 * @src: source string
 * @dest: destination
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
