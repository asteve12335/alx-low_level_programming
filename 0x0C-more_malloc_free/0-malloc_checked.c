#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes requested
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		return (98);
	}
	return (malloc(b));
}
