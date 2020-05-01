#include "lists.h"

/**
 * print_dlistint - prints all elements of a list.
 * @h: pointer to head element of list
 *
 * Return: The numbers of nodes
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
