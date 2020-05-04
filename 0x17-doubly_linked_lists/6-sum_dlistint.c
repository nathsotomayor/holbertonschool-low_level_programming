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

	while (tmp != NULL)
	{
		sum += tmp->n;
		head = head->next;
	}
	return (sum);
}
