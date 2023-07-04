#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head of listint
 * @head: head node
 * Return: the head node's data on Success
 * 0 if not
 */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		i = (*head)->n;
		tmp = (*head);
		*head = (*head)->next;
		free(tmp);
	}
return (i);

}
