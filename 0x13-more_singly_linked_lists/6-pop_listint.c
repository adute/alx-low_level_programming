#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - fn that deletes the head node
 * @head: header of linked list
 *
 * Return: head->data;
 * 0: if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	tmp = *head;
	data = tmp->n;

	*head = (*head)->next;
	free(tmp);

	return (data);

}
