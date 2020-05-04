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

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
