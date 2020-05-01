#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a lnked list.
 * @h: pointer to head element of list
 *
 * Return: Numbers of elements of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (0);

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}

	return (num);
}
