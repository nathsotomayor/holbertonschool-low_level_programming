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
	unsigned int x = 1;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (x == index)
			return (head);
	/*	else
			return (NULL);
*/
		x++;
		head = head->next;
	}
	return (head);
}
