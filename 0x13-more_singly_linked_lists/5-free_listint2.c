#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and setts head to NULL
 * @head: head of a lest
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while ((*head)->next != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		free(*head);
	}
}
