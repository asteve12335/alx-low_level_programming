#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	/* declare variables */
	size_t left, right, mid, i;

	/* check if array is NULL */
	if (array == NULL)
		return (-1);

	/* initialize left and right */
	left = 0;
	right = size - 1;

	/* loop through array */
	while (left <= right)
	{
		/* print array */
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		/* calculate mid */
		mid = (left + right) / 2;
		/* check if value is found, return index */
		if (array[mid] == value)
			return (mid);
		/* check if value is in left half */
		else if (array[mid] > value)
			right = mid - 1;
		/* check if value is in right half */
		else
			left = mid + 1;
	}

	/* if value not found, return -1 */
	return (-1);
}
