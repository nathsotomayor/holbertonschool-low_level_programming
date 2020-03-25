#include "lists.h"

/**
 * *get_nodeint_at_index - Returns the nth node of a list
 * @head: pointer to head element of list
 * @index: Index of list
 *
 * Return: The nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	listint_t *node_tmp = malloc(sizeof(listint_t));

	node_tmp->n = head->n;
	node_tmp->next = head->next;


	if (!head)
		return (NULL);

	while (node_tmp != NULL)
	{
		if (x == index)
			return (node_tmp);

		x++;
		node_tmp = node_tmp->next;
	}
	return (node_tmp);
}
