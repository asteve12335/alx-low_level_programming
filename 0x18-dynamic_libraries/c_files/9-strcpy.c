#include <string.h>
#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
