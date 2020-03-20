#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to head element of list
 * @str: pointer to string of list
 *
 * Return: The address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int n, len_new = 0;
	list_t *new = NULL, *tmp = *head;

	new = malloc(sizeof(list_t));

	for (n = 0; str[n] != '\0'; n++)
	{
		len_new++;
	}

	if (new != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}	
	else
		return (NULL);

	return (new);
}
