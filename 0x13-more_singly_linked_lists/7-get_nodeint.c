#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns nth node of listint
 * @head: head node
 * @index: the index of the node
 * Return: the nth node's data on Success
 * NULL if not
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = malloc(sizeof(listint_t));;

	if (head == NULL || tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp = head;
		while (i < index)
		{
		tmp = tmp->next;
		i++;
		}
	}
return (tmp);

}
