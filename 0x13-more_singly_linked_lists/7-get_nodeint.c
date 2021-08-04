#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets nth node of listint_t
 * @head: header
 * @index: index of the nde
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *search = head;

	if (search)
	{
		if (count == index)
		{
			return (search);
		}
			count++;
			search = search->next;
	}
	return (NULL);
}
