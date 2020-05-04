#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head element of list
 * @n: integer
 *
 * Return: The address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
