#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes requested
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	return (malloc(b));
}
