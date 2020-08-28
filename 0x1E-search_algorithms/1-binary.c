#include "search_algos.h"

/**
 * binary_search - Searches for a value in an sorted array of integers
 *				   using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: Is the value to search for
 *
 * Return: The first index where value is located, or -1 if value not found or
 *		   array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first_idx = 0, last_idx = size - 1;
	size_t middle_pos, idx;

	if (array == NULL || first_idx > last_idx)
		return (-1);

	while (first_idx <= last_idx)
	{
		printf("Searching in array: ");
		for (idx = first_idx; idx <= last_idx; idx++)
		{
			if (idx == last_idx)
				printf("%d\n", array[idx]);
			else
				printf("%d, ", array[idx]);

		}

		middle_pos = (first_idx + last_idx) / 2;

		if (array[middle_pos] < value)
			first_idx = middle_pos + 1;
		else if (array[middle_pos] > value)
			last_idx = middle_pos - 1;
		else
			return (middle_pos);
	}
	return (-1);
}
