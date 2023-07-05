#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes note at index of listint
 * @head: head node
 * @index: the index
 * Return: 1 on SUCCESS
 * -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
		tmp = *head;
	while (tmp->next != NULL)
	{
	*head = (*head)->next;
	i++;
		if (i == index)
		{
		free(*head);
		}
	}
	}
return (1);

}
