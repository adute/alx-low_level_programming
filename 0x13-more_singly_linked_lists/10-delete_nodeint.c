#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: header
 * @index: index of node that should be deleted
 *
 * Return: 1 on success
 * -1: if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nxt, *tmp = *head;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL && count < index - 1)
	{
		count++;
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
	{
		return (-1);
	}
	nxt = tmp->next->next;
	free(tmp->next);
	tmp->next = nxt;
	return (1);
}
