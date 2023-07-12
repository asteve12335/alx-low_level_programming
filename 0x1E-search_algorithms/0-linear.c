#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	/* declare variables */
	size_t i;

	/* check if array is NULL */
	if (array == NULL)
		return (-1);

	/* loop through array */
	for (i = 0; i < size; i++)
	{
		/* print value checked */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		/* check if value is found, return i */
		if (array[i] == value)
			return (i);
	}

	/* if value not found, return -1 */
	return (-1);
}
