#include "lists.h"

/**
 * free_dlistint - Free a list.
 * @head: pointer to head element of list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *store;

	tmp = head;

	while (tmp != NULL)
	{
		store = tmp->next;
		free(tmp);
		tmp = store;
	}
}
