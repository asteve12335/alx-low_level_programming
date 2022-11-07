#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates a char array and inits it with a specific char.
 *
 * @size: size of array
 * @c: size to initialize array with.
 *
 * Return: char array created
 */

char *create_array(unsigned int size, char c)
{
	char *array_alloc = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || array_alloc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_alloc[i] = c;

	return (array_alloc);
}
