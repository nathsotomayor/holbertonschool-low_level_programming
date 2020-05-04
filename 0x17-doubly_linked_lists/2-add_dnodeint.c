#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to head element of list
 * @n: integer
 *
 * Return: The address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
		return (NULL);

	return (new);
}
