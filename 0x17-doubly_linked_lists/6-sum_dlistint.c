#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data of a list
 * @head: pointer to head element of list
 *
 * Return: The sum
 */

int sum_dlistint(dlistint_t *head);
{
	int sum = 0;
	dlistint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
