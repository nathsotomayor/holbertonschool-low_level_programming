#include "lists.h"

/**
 * *get_dnodeint_at_index - Returns the nth node of a list
 * @head: pointer to head element of list
 * @index: Index of list
 *
 * Return: The nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (x == index)
			return (head);
		x++;
		head = head->next;
	}
	return (head);
}
