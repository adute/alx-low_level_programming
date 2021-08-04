#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses listint_t
 * @head: header of linked list
 *
 * Return: reversed list pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nxt = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;

	return (*head);
}
