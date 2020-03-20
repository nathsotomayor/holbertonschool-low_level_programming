#include "lists.h"

/**
 * list_len - returns the number of elements in a lnked list.
 * @h: pointer to head element of list
 *
 * Return: Numbers of elements of list
 */

size_t list_len(const list_t *h)
{
	int n;

	if (h == NULL)
		return (0);

	for (n = 0; h != NULL; n++)
	{
		h = h->next;
	}
	return (n);
}
