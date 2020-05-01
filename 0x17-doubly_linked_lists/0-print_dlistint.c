#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	for (num = 0; h != NULL; num++)
	{
		if (h == NULL)
		{
			return (0);
		}
		else
		{
			printf("%i\n", h->n);
		}
		h = h->next;
	}
	return (num);
}
