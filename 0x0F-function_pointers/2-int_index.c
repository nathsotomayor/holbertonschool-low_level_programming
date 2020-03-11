#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Pointer to string
 * @size: Size of the array
 * @cmp: Pointer to function
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))

		return (i);
	}
	return (-1);
}
