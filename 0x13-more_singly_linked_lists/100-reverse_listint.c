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
	lintint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *nxt;

	if (head)
	{
	while (current != NULL)
	{
		nxt = current->next;
		current->next = prev;
		prev = current;
		current = nxt;
	}
	*head = prev;

	return (*head);
	}
	return (NULL);
}
