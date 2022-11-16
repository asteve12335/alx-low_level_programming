#include "function_pointers.h"

/**
 * array_iterator - acts on each array member
 * @array: an array of characters
 * @zize: an int
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
