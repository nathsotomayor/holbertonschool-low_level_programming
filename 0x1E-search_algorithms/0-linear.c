#include "search_algos.h"

/**
 * line_search - Searches for a value in an array of integers
 *				 using the Linear search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: Is the value to search for
 *
 * Return: The first index where value is located, or -1 if value not found or
 *		   array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
