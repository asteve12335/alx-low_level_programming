#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: unsingned int
 * @size: unsigned int
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = (void *)malloc(nmemb * size);

	if (arr == NULL)
	{
		exit(0);
	}
	return (arr);
}
